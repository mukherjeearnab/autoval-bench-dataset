int solve_student(const char s[], int n) {
  int i, j;
  for (i = 0, j = n - 1; i < n; i++, j--) {
    if (s[i] != s[j]) {
      return 0;
    }
  }
  return 1;
}