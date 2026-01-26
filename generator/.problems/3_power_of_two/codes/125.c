int solve_student(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;
  int i = 1;
  while (i < n) {
    if (i == n) return 1;
    i *= 2;
  }
  return 0;
}