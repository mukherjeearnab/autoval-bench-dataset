int solve_student(int n) {
  long long res = 0;
  int sign = n < 0 ? -1 : 1;
  n = abs(n);
  while (n > 0) {
    res = res * 10 + n % 10;
    if (res > INT_MAX) return 0;
    n /= 10;
  }
  return (int)(res * sign);
}