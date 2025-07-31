int solve_student(int n) {
  if (n <= 1) {
    return n;
  }
  int fib_n_minus_1 = 1;
  int fib_n_minus_2 = 0;
  int fib_n = 0;
  for (int i = 2; i <= n; i++) {
    fib_n = fib_n_minus_1 + fib_n_minus_2;
    fib_n_minus_2 = fib_n_minus_1;
    fib_n_minus_1 = fib_n;
  }
  return fib_n;
}