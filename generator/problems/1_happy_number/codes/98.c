int solve_student(int n) {
  if (n <= 0) return 0;
  int temp;
  while (n != 1 && n < 10000) {
    int sum = 0;
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    n = sum;
  }
  return n == 1;
}