int solve_student(int n) {
  int a = 0;
  int b = 0;
  while (n != 1 && n != 4) {
    while (n > 0) {
      int digit = n % 10;
      a += digit * digit;
      n /= 10;
    }
    n = a;
    if (n == 1) return 1;
    if (n == 4) return 0;
    a = 0;
  }
  return (n == 1);
}