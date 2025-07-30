int solve_student(int n) {
  int reversed = 0;
  while (n != 0) {
    int digit = n % 10;
    n /= 10;
    if (reversed == INT_MAX || reversed == INT_MIN) {
      return 0;
    }
    reversed = reversed * 10 + digit;
  }
  return reversed;
}