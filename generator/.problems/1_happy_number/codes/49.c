int solve_student(int n) {
  int num = n;
  while (num != 1 && num != 4) {
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