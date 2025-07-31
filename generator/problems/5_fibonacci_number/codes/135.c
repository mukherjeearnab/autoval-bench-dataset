int solve_student(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    int result = 0;
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
      result = a + b;
      a = b;
      b = result;
    }
    return result;
  }
}