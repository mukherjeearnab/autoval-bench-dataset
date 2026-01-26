int solve_student(int n) {
  int a = 0, b = 1, temp;
  if (n == 0) return 0;
  for (int i = 1; i <= n; i++) {
    temp = a + b;
    a = b;
    b = temp;
  }
  return a;
}