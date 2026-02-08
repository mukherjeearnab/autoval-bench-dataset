int solve_student(char* input_string, int string_length) {
  int start = 0;
  int end = string_length - 1;

  while (start < end) {
    if (input_string[start] != input_string[end]) {
      return 0;
    }
    start++;
    end--;
  }
  return 1;
}