int solve_student(int n) {
  long long rev = 0;
  while (n != 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
  }
  if (rev > INT_MAX || rev < INT_MIN) return 0;
  return (int)rev;
}