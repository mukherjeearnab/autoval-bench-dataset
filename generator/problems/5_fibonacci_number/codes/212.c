int solve_student(int n) {
  int a = 0, b = 1;
  if (n == 0) return a;
  if (n == 1) return b;
  int i = 2;
  while (i < n) {
    int temp = a + b;
    a = b;
    b = temp;
    i++;
  }
  return a;
}