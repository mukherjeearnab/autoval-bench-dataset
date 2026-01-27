int solve_student(int a, int b, int c) {
  int maximum = a;
  if (b > maximum) {
    maximum = b;
  } else if (c > maximum) {
    maximum = c;
  }
  return maximum;
}