int solve_student(int n) {
  int f0 = 0;
  int f1 = 1;
  int fn;
  for (int i = 0; i < n; i++) {
    fn = f0 + f1;
    f0 = f1
    f1 = fn;
  }
  return f0;
}