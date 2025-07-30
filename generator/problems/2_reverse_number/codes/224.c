int solve_student(int n) {
  int reversed = 0;
  int original = n;
  while (n != 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }
  if (reversed > 2147483647 && original < 0) return 0;
  if (reversed < -2147483648 && original > 0) return 0;
  return reversed;
}