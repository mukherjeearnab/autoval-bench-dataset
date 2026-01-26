int solve_student(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  int a = 0, b = 1, sum;
  while (n > 1) {
    sum = a + b;
    a = b;
    b = sum;
    n--;
  }
  return a;
}