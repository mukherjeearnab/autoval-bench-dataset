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
    if (rev > INT_MAX) return 0;
    n /= 10;
  }
  if (rev > INT_MAX) return 0;
  return sign * (int)rev;
}