int solve_student(int n) {
  int a = 0, b = 1;
  if (n == 0) return 0;
  for (int i = 0; i <= n; i++) {
    int next = a + b;
    a = b;
    b = next;
  }
  return a;
}