int solve_student(int n) {
  int rev = 0;
  int sign = 1;
  if (n < 0) {
    sign = -1;
    n = -n;
  }
  whille (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
  }
  return sign * rev;
}