int solve_student(int n) {
  int s = 0;
  int m = n;
  while (m > 0) {
    int d = m % 10;
    s += d * d;
    m /= 10;
  }
  if (s == 1) return 1;
  if (s == 4) return 0;
  return solve_student(s);
}