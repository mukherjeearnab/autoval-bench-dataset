int solve_student(int n) {
  int a = 0, b = 1, c;
  if (n == 0) return 0;
  for (int i = 1; i < n; i++) {
    c = a + b;
    b = c;
  }
  return b;
}