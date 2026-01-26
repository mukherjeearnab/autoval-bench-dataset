int solve_student(int n) {
  int result = 0;
  for (int i = 0; i <= n; i++) {
    if (i == n && i > 0) {
        result = 1;
    }
  }
  return result;
}