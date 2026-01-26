int solve_student(int n) {
  if (n == 1) {
    return 1;
  }
  int i = 2;
  while (i < n) {
    if (n % i == 0) {
      return 0;
    }
    i = i * 2;
  }
  return 1;
}