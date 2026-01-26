int solve_student(int n) {
  int a = 0, b = 1;
  if (n == 0) return 0;
  if (n == 1) return 1;
  int i = 2;
  while (i < n) {
    int temp = a + b;
    a = b;
    b = temp;
    i++;
  }
  return b;
}