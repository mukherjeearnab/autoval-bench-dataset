int solve_student(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  int a = 0;
  int b = 1;
  int c;
  while (n > 1) {
    c = a + b;
    a = b;
    b = c;
    n--;
  }
  return b;
}