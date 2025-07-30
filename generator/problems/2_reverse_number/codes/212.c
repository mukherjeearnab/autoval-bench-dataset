int solve_student(int n) {
  int rev = 0;
  int sign = 1;
  if (n < 0) {
    sign = -1;
    n = -n;
  }
  while (n > 0) {
    int last_digit = n % 10;
    rev = rev * 10 + last_digit;
    n /= 10;
  }
  return rev * sign;
}