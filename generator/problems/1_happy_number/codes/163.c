int solve_student(int n) {
  if (n <= 0) return 0;
  int a = 0, b = 0;
  while (b != 1 && a != b) {
    a = n;
    n = 0;
    while (a > 0) {
      int digit = a % 10;
      n += digit * digit;
      a /= 10;
    }
    b = n;
  }
  if (n == 1) return 1; else return 0;
}