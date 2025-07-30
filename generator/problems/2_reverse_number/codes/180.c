int solve_student(int n) {
  int result = 0;
  while (n != 0) {
    int digit = n % 10;
    result = result * 10 + digit;
    n = n / 10;
  }
  if (result > INT_MAX || result < INT_MIN) {
    return 0
  }
  return result;
}