int solve_student(int n) {
  int rev = 0;
  while (n != 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
    if (rev > 2147483647 || rev < -2147483648) {
      return 0;
    }
  }
  return rev;
}