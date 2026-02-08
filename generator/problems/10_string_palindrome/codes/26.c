int solve_student(char* str, int len) {
  int i = 0;
  while (i < len) {
    if (str[i] != str[len - i]) {
      return 0;
    }
    i++;
  }
  return 1;
}