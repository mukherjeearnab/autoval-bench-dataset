int solve_student(int n) {
  if (n <= 1) return n;
  int a = 0, b = 1;
  while (n > 1) {
    int temp = a + b;
    a = b;
    b = temp;
    n--;
  }
  return b;
}