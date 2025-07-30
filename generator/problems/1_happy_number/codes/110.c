int solve_student(int n) {
  if (n <= 0) return 0;
  int a = n;
  while (a != 1 && a < 1000) {
    int b = 0;
    while (n > 0) {
      int digit = n % 10;
      b += digit * digit;
      n /= 10;
    }
    n = b;
  }
  return n == 1;
}