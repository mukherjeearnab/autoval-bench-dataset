int solve_student(int n) {
  if (n <= 0) return 0;
  int a = n;
  while (a != 1 && a < 10000) {
    int sum = 0;
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    n = sum;
    if (n == a) return 0;
    a = n;
  }
  if (n == 1) return 1; else return 0;
}