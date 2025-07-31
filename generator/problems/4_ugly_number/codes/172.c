int solve_student(int n) {
  int i;
  if (n < 0) return 0;
  for (i = 0; i < n; i++) {
    if (n % 2 != 0) return 0;
    if (n % 3 != 0) return 0;
    if (n % 5 != 0) return 0;
  }
  return 1;
}