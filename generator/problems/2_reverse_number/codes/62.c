int solve_student(int n) {
  long long rev = 0;
  int sign = 1;
  if (n < 0) {
    sign = -1;
    n = -n;
  }
  while (n > 0) {
    int pop = n % 10;
    rev = rev * 10 + pop;
    n /= 10;
  }
  if (rev > 2147483647) return 0;
  if (rev > INT_MAX) return 0;
  return sign * (int)rev;
}