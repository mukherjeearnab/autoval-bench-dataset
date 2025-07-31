int solve_student(int n) {
  int a = 0, b = 1;
  if (n == 0) return a;
  if (n == 1) return b;
  for (int i = 2; i < n; i++) {
    a = a + b;
    b = a;
  }
  return a;
}