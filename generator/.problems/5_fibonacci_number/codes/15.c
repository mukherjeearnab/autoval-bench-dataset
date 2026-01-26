int solve_student(int n) {
  if (n <= 1) {
    return n;
  } else {
    int result = 0;
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; i++) {
      result = a + b;
      a = b;
      b = result;
    }
    return result;
  }
}