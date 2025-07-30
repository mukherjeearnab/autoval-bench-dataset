int solve_student(int n) {
  long long rev = 0;
  int sign = n < 0 ? -1 : 1;
  n = abs(n);
  while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
  }
  if (rev > INT_MAX) return 0;
  return (int)(rev * sign);
}