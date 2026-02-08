int solve_student(char* s, int len) {
  int i;
  for (i = 0; i < len / 2; i++) {
    if (s[i] != s[len - i]) {
      return 0;
    }
  }
  return 1;
}