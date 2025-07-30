int solve_student(int n) {
  int s = 0;
  while (n != 1 && n != 4) {
    while (n > 0) {
      int d = n % 10;
      s += d * d;
      n /= 10;
    }
    n = s;
    s = 0;
  }
  return n == 1;
}