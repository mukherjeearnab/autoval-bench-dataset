int solve_student(int n) {
  long long rev = 0;
  while (n != 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
  }
  if (rev > 0x7FFFFFFF || rev < -0x80000000) {
    return 0;
  }
  return (int)rev;
}