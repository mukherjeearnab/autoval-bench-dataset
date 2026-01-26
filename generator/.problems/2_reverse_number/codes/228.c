int solve_student(int n) {
  int reversed = 0;
  if (n == 0) return 0;
  while (n != 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n = n / 10;
    if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
        return 0;
    }
  }
  return reversed;
}