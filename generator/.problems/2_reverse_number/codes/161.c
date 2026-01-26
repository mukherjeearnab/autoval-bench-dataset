int solve_student(int n) {
  int reversed = 0;
  while (n != 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
      return 0;
    }
    n /= 10;
  }
  return reversed
}