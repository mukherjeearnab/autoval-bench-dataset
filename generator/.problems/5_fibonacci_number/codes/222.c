int solve_student(int n) {
  int a = 0, b = 1, c;
  if (n == 1) return 1;
  while (n > 1) {
    c = a + b;
    a = b;
    b = c;
    n--;
  }
  return a;
}