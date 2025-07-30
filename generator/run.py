import os
import json
import ollama

problem = '2_reverse_number'
correctness_type = 'semantically incorrect'
starting_index = 226

with open(f'./problems/{problem}/problem.txt', 'r') as f:
    problem_stmt = f.read()

'''
5. [IMPORTANT] the example submissions need to contain syntax errors. Errors include, but not limited to:
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
'''

prompt = f"""
You are a programming tutor generating example student submissions in the C programming language. Given a problem statement and a function template, you will generate realistic student solutions, which may vary in style, but needs to be {correctness_type} answers.

Instructions:
1. Use only the standard C library (no external dependencies), and include all required header files.
2. Simulate different skill levels (e.g., beginner, intermediate, advanced).
3. Don't include any comments.
4. Do not write anything outside the code block.
5. [IMPORTANT] the example submissions MUST contain SERIOUS semantic errors. Errors include, but not limited to:
    1. Using the wrong variable in expressions
    2. Logic inside if, while, etc., does not reflect intended behavior
    3. Common in loops and array indexing
    4. Wrong Use of Assignment (=) vs Equality (==)
    5. Logic might skip important steps or iterate incorrectly
    6. Errors in AND/OR conditions
    7. The code structure looks fine but doesn't solve the problem
    8. Using a local variable when a global one was intended
    9. Implicit type conversions lead to unexpected results

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
int solve_student(int n) {{
    // your code here
}}
````

---

Now generate the student submissions.
"""

OLLAMA_HOST = 'http://172.30.1.82:11434'

client = ollama.Client(
    host=OLLAMA_HOST
)


for TRIAL in range(8):
    print('RUNNING TRIAL', TRIAL)
    response = client.chat(
        model='gemma3:27b',  # or 'deepseek-coder:6.7b', etc.
        messages=[
            {'role': 'user', 'content': prompt}
        ],
        options={
            'temperature': 0.9
        }
    )

    resp = response['message']['content'].replace(
        '```json', '').replace('```', '')

    obj = json.loads(resp)

    print(json.dumps(obj, indent=4))

    os.makedirs(f'./problems/{problem}/codes/', exist_ok=True)
    for code in obj:
        with open(f'./problems/{problem}/codes/{starting_index}-{correctness_type}.c', 'w') as f:
            f.write(code)

        starting_index += 1
