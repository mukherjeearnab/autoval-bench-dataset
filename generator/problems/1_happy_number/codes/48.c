int solve_student(int n) {
  if (n <= 0) return 0;
  long long num = n;
  while (num != 1 && num < 1000000) {
    long long sum = 0;
    while (num > 0) {
      int digit = num % 10;
      sum += (long long)digit * digit;
      num /= 10;
    }
    num = sum;
  }
  return (num == 1);
}