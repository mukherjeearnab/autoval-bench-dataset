int solve_student(int n) {
  if (n <= 0) return 0;
  int a = 0, b = 0;
  while (n != 1 && n != 0) {
    while (n > 0) {
      int digit = n % 10;
      a += digit * digit;
      n /= 10;
    }
    if (a == 1) return 1;
    n = a;
    a = 0;
  }
  return n == 1;
}