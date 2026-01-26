int solve_student(int n) {
  long long reversed = 0;
  int sign = 1;
  if (n < 0) {
    sign = -1;
    n = -n;
  }
  while (n > 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  reversed *= sign;
  if (reversed > 2147483647 || reversed < -2147483648) {
    return 0;
  }
  return (int)reversed;
}