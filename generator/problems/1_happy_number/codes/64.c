int solve_student(int n) {
  int num = n;
  int result = 0;
  while (num != 1 && result < 1000) {
    result++;
    int sum = 0;
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    n = sum;
  }
  return (n == 1);
}