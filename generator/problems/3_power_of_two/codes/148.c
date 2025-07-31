int solve_student(int n) {
  int i = 0;
  if (n <= 0) return 0;
  while (pow(2, i) <= n) {
    if (pow(2, i) == n) {
      return 1;
    }
    i++;
  }
  return 0;
}