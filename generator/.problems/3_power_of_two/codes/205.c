int solve_student(int n) {
  int x = 0;
  while (x < n) {
    if (x == n) return 1;
    x = x + 2;
  }
  return 0;
}