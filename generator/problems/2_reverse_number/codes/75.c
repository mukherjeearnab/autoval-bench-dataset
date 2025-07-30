int solve_student(int n) {
  long long rev = 0;
  int temp = n;
  while (temp != 0) {
    rev = rev * 10 + temp % 10;
    temp /= 10;
  }
  if (rev > 2147483647 || rev < -2147483648) {
    return 0;
  }
  return (int)rev;
}