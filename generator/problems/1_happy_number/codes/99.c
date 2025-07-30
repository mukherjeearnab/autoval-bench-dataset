int solve_student(int n) {
  int a = n;
  while (a != 1 && a != 4) {
    int sum = 0;
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    n = sum;
    if (n == 4) return 0;
  }
  return n == 1;
}