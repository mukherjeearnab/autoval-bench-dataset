int solve_student(int n) {
  int result = 1;
  if (n == 0) {
    return 0;
  }
  while (n > 1) {
    result = result * 2;
    if (result > n) {
        return 0;
    }
  }
  return 1;
}