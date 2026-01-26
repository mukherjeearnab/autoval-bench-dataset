int solve_student(int n) {
  int rev = 0;
  while (n != 0) {
    int digit = n % 10;
    rev = rev + digit * 10;
    n /= 10;
  }
  return rev;
}