int solve_student(int n) {
  int f0 = 0;
  int f1 = 1;
  int fn;
  if (n == 0) return f0;
  else if(n == 1) return f1;
  for (int i = 2; i <= n; ++i) {
    fn = f0 + f1;
    f0 = f1
    f1 = fn;
  }
  return fn;
}