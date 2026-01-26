int solve_student(int n) {
  long long reversed = 0;
  if (n == 0) return 0;
  int sign = 1;
  if (n < 0) {
    sign = -1;
    n = -n;
  }
  while (n != 0) {
    reversed = reversed * 10 + n % 10;
    if (reversed > INT_MAX || reversed < INT_MIN) {
      return 0;
    }
    n /= 10;
  }
  return (int)(reversed * sign);
}