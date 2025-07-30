int solve_student(int n) {
  int rev = 0;
  int original = n;
  while (n > 0) {
    rev = rev * 10 + n % 10;
    n = n / 10;
  }
  if (rev > 2147483647) {
    return 0;
  }
  if (original < 0) {
      rev = -rev;
  }
  return rev;
}