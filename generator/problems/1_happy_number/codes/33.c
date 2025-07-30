int solve_student(int n) {
  int sum_sq = 0;
  while (n != 1 && n > 0) {
    int temp = n;
    while (temp > 0) {
      int digit = temp % 10;
      sum_sq += digit * digit;
      temp /= 10;
    }
    n = sum_sq;
    sum_sq = 0;
  }
  if (n == 1) return 1; else return 0;
}