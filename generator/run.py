import re
import os
import json
import ollama

# change these
input_params = 'int *arr, int n'
return_type = 'void'
problem = '5_sort_an_array'
###############

correctness_types = ['correct',
                     'syntactically incorrect', 'semantically incorrect']
starting_index = 1

with open(f'./problems/{problem}/problem.txt', 'r') as f:
    problem_stmt = f.read()

incorrect_specs = [
    '',
    '''5. [IMPORTANT] the example submissions need to contain syntax errors. Errors include, but not limited to:
    1. Missing semicolon
    2. Misspelled Keywords or Identifiers
    3. Using Undeclared Variables
    4. Wrong Use of Assignment (=) vs Equality (==)
    5. Type Mismatches
    6. Improper Function Definitions or Calls
    7. Misuse of Operators
    8. Incorrect Case Sensitivity
    9. Invalid Return or Break Statements
    10. Confusing Syntax from Other Languages
''',

    '''5. [IMPORTANT] the example submissions MUST contain SERIOUS semantic errors. Errors include, but not limited to:
    1. Using the wrong variable in expressions
    2. Logic inside if, while, etc., does not reflect intended behavior
    3. Common in loops and array indexing
    4. Wrong Use of Assignment (=) vs Equality (==)
    5. Logic might skip important steps or iterate incorrectly
    6. Errors in AND/OR conditions
    7. The code structure looks fine but doesn't solve the problem
    8. Using a local variable when a global one was intended
    9. Implicit type conversions lead to unexpected results
'''
]


def get_prompt(correctness_type: str, incorrect_spec: str, problem_stmt, input_params: str, return_type: str):

    prompt = f"""
You are a programming tutor generating example student submissions in the C programming language. Given a problem statement and a function template, you will generate realistic student solutions, which may vary in style, but needs to be {correctness_type} answers.

Instructions:
1. Use only the standard C library (no external dependencies), and include all required header files.
2. Simulate different skill levels (e.g., beginner, intermediate, advanced).
3. Don't include any comments.
4. Do not write anything outside the code block.
5. Write the solve_student() function in the last, to help avoid compilation errors.
{incorrect_spec}

Input Format:
- Problem Statement
- Function Template

Output:
Return a JSON Array of strings of 5 example student submissions in C99, each with slight variations in logic, formatting, or correctness.

---

Example Input:

Problem Statement:  
{problem_stmt}

---

Function Template:  
```c
{return_type} solve_student({input_params}) {{
    // your code here
}}
````

---

Now generate the student submissions.
"""

    return prompt


OLLAMA_HOST = 'http://172.30.1.82:11434'

client = ollama.Client(
    host=OLLAMA_HOST
)


def move_c_function_to_end(code):
    func_name = 'solve_student'

    # Pattern to match function definition (not just prototype)
    pattern = rf'\b[\w\s\*\(\)]+\b{re.escape(func_name)}\s*\([^;]*?\)\s*\{{'

    match = re.search(pattern, code)
    if not match:
        print(f"Function {func_name} not found.")
        return

    start = match.start()

    # Use brace counting to find the full function body
    i = match.end() - 1  # position at the opening {
    brace_count = 1
    while i < len(code) - 1 and brace_count > 0:
        i += 1
        if code[i] == '{':
            brace_count += 1
        elif code[i] == '}':
            brace_count -= 1

    end = i + 1  # include the closing }

    func_body = code[start:end]
    code_before = code[:start]
    code_after = code[end:]

    # Reconstruct the file with the function moved to the end
    new_code = code_before.strip() + '\n\n' + code_after.strip() + \
        '\n\n' + func_body + '\n'

    return new_code


for TRIAL in range(48):
    correctness_type = correctness_types[0]
    incorrect_spec = incorrect_specs[0]
    if TRIAL > 33:
        correctness_type = correctness_types[1]
        incorrect_spec = incorrect_specs[1]
    if TRIAL > 37:
        correctness_type = correctness_types[2]
        incorrect_spec = incorrect_specs[2]

    print('RUNNING TRIAL', TRIAL)
    response = client.chat(
        model='gemma3:27b',  # or 'deepseek-coder:6.7b', etc.
        messages=[
            {'role': 'user', 'content': get_prompt(correctness_type=correctness_type, incorrect_spec=incorrect_spec,
                                                   problem_stmt=problem_stmt, input_params=input_params,
                                                   return_type=return_type)}
        ],
        options={
            'temperature': 0.95
        }
    )

    resp = response['message']['content'].replace(
        '```json', '').replace('```', '')

    obj = json.loads(resp)

    print(json.dumps(obj, indent=4))

    os.makedirs(f'./problems/{problem}/codes/', exist_ok=True)
    for code in obj:
        code: str = move_c_function_to_end(code)
        code = code.strip()
        with open(f'./problems/{problem}/codes/{starting_index}.c', 'w') as f:
            f.write(code)

        starting_index += 1
