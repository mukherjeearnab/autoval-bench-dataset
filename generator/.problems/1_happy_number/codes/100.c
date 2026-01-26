int solve_student(int n) {
  int res = n;
  while (res != 1 && res > 0) {
    int sum = 0;
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    n = sum;
    if (n == 1) return 1;
    if (n == 4) return 0;
  }
  return n == 1;
}