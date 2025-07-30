int solve_student(int n) {
  int rev = 0;
  while (n != 0) {
    int pop = n % 10;
    rev = rev * 10 + pop;
    n /= 10;
  }
  if (rev > INT_MAX || rev < INT_MIN) {
    return 0;
  }
  return rev;
}