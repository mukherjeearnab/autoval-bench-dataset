int solve_student(char* s, int len) {
  for (int i = 0; i < len; i++) {
    if (s[i] != s[len - i])
      return 0;
  }
  return 1;
}