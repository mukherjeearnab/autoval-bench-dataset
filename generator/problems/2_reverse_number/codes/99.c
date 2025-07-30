int solve_student(int n) {
  long long reversed = 0;
  int sign = n < 0 ? -1 : 1;
  n = abs(n);
  while (n > 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
    if (reversed > INT_MAX) return 0;
  }
  if (reversed > INT_MAX || reversed < INT_MIN) return 0;
  return (int)(reversed * sign);
}