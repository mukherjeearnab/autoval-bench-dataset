int solve_student(int n) {
  if (n <= 0) return 0;
  int i = 0;
  while ((1 << i) <= n) {
    if ((1 << i) == n) {
      return 1;
    }
    i++;
  }
  return 0;
}