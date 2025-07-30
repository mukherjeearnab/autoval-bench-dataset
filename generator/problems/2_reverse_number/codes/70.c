int solve_student(int n) {
  int reversed = 0;
  int sign = 1;
  if (n < 0) {
    sign = -1;
    n = -n;
  }
  while (n > 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  if (reversed > INT_MAX || reversed < INT_MIN) {
    return 0;
  }
  return reversed * sign;
}