int solve_student(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else {
    int f0 = 0;
    int f1 = 1;
    int fn;
    for (int i = 2; i <= n; i++) {
      fn = f0 + f1;
      f0 = f1;
      f1 = fn;
    }
    return f1;
  }
}