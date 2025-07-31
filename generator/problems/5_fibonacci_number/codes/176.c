int solve_student(int n) {
  int a = 0;
  int b = 1;
  if (n <= 1) return n;
  int c = a + b;
  for (int i = 2; i < n; i++) {
    a = b;
    b = c;
    c = a + b;
  }
  return c;
}