import re
import os
import json
import ollama
import traceback

# change these
problems = [  # '10_string_palindrome',     '2_even_odd', '4_factorial', '6_count_positive_in_array',
    '8_find_min_in_array',
    '1_roots_of_quadratic_eq', '3_maximum_of_3_nums', '5_sum_of_digits', '7_reverse_array', '9_check_sorted_array']
# problem = '1_sum_of_numbers'
###############

for problem in problems:

    starting_index = 1

    with open(f'./problems/{problem}/problem.txt', 'r') as f:
        problem_stmt = f.read()

    with open(f'./problems/{problem}/function_sig.c', 'r') as f:
        function_sig = f.read()

    def get_prompt():

        prompt = f"""
    You are generating student programming assignment submissions.

    ### Assignment Description
    {problem_stmt}

    ### Required Function Interface
    All student submissions MUST define the following function exactly:

    {function_sig}

    The function name must be exactly:
        solve_student

    ### Output Requirements
    You must generate EXACTLY 10 different student submissions written in C.

    - Out of the 10 submissions:
    - EXACTLY 7 must be fully correct and logically sound
    - The REMAINING 3 CAN be incorrect
        - Incorrect submissions may contain:
        - semantic/logical bugs, OR
        - syntax/compilation errors, OR
        - both
        - They should look like realistic student mistakes (off-by-one errors, missing edge cases, wrong loop bounds, incorrect return values, missing headers, etc.)

    - Each submission should look like it was written by a DIFFERENT student:
    - Vary coding style, formatting, indentation, comments, and variable names
    - Some students may write clean and well-commented code
    - Some may write minimal or messy code
    - Some may use helper functions, others may not
    - Do NOT reuse the same structure across submissions

    ### Constraints
    - Every submission MUST include a function named `solve_student`
    - Even incorrect submissions MUST attempt to follow the required function signature
    - Do NOT include explanations, comments outside code, or any text other than the final JSON
    - Do NOT label which submissions are correct or incorrect

    ### Output Format (STRICT)
    Return ONLY a valid JSON array of length 10.

    Each element must be a single string containing a complete C program or C code snippet.
    Example shape (do NOT copy content):

    [
    "/* student 1 code */",
    "/* student 2 code */",
    ...
    ]

    DO NOT include markdown fences.
    DO NOT include trailing commas.
    DO NOT include anything outside the JSON array.
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

    for TRIAL in range(16):

        while True:
            try:
                print(f'RUNNING {problem} TRIAL', TRIAL)
                response = client.chat(
                    model='gemma3:27b',  # or 'deepseek-coder:6.7b', etc.
                    messages=[
                        {'role': 'user', 'content': get_prompt()}
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
                break
            except Exception as e:
                print(e)
                print(traceback.format_exc())
