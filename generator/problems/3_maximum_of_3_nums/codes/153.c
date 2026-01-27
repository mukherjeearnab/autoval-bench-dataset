int solve_student(int a, int b, int c) {
  int maximum;
  if (a >= b && a >= c) {
    maximum = a;
  } else if (b >= a && b >= c) {
    maximum = b;
  } else {
    maximum = c;
  }
  return maximum;
}