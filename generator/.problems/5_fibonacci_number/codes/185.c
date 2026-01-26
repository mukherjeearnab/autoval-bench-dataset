int solve_student(int n) {
  int a = 0;
  int b = 1;
  int temp;
  while (n > 1) {
    temp = a + b;
    a = b;
    b = temp;
    n--;
  }
  return b;
}