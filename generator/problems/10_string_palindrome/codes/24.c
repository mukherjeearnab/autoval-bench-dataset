int solve_student(char* str, int size) {
  int start = 0;
  int end = size;
  while (start < end) {
    if (str[start] == str[end]) {
      start++;
      end--;
    } else {
      return 0;
    }
  }
  return 1;
}