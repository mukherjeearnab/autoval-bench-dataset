int solve_student(int a, int b, int c) {
  int maximum = a;
  maximum = (b > maximum) ? b : maximum;
  maximum = (c > maximum) ? c : maximum;
  return maximum;
}