int solve_student(int n) {
  if (n <= 0) return 0;
  int i = 1;
  while (i < n) {
    i *= 2;
  }
  return i == n;
}