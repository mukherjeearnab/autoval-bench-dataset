int solve_student(int n) {
  int reversed = 0;
  int original = n;
  while (n > 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  if (reversed > 2147483647 || reversed < -2147483648) {
    return 0;
  }
  if (original < 0) {
    return -reversed;
  }
  return reversed;
}