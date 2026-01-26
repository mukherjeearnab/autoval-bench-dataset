int solve_student(int n) {
  int result = 1;
  for (int i = 0; i < 32; i++) {
    if (result == n) {
      return 1;
    }
    result = result * 2;
  }
  return 0;
}