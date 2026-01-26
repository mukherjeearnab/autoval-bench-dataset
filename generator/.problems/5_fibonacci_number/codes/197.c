int solve_student(int n) {
  int a = 0, b = 1;
  if (n == 1) return 1;
  while (n > 1) {
    int temp = a + b;
    a = b;
    b = temp;
    n--;
  }
  return a;
}