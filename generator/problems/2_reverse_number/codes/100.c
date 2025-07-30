int solve_student(int n) {
  long long rev = 0;
  while (n != 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
    if (rev > 2147483647 || rev < -2147483648) {
      return 0;
    }
  }
  return (int)rev;
}