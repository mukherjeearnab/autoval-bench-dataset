int solve_student(int n) {
  int a = 0, b = 1;
  int temp;
  while (n > 0) {
    temp = a + b;
    a = b;
    b = temp;
    n--;
  }
  return a;
}