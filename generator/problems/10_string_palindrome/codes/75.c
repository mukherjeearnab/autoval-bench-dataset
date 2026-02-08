int solve_student(char *str, int length) {
  int i;
  for (i = 0; i < length; i++) {
    if (str[i] != str[length - i - 1]) {
        return 0;
    }
  }
  return 1;
}