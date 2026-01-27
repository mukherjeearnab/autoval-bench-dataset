int solve_student(const char s[], int n) {
  int len = strlen(s);
  if (len == 0) return 1;
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - i - 1]) {
      return 0;
    }
  }
  return 1;
}