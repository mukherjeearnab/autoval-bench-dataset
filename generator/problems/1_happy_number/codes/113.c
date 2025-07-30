int solve_student(int n) {
  int sum = 0;
  while (n != 1 && sum != 1) {
    sum = 0;
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    n = sum;
  }
  return n == 1;
}