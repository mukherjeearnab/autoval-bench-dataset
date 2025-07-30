int solve_student(int n) {
  int sum = 0;
  int num = n;
  while (num != 1 && num != 4) {
    while (num > 0) {
      int digit = num % 10;
      sum += digit * digit;
      num /= 10;
    }
    num = sum;
    sum = 0;
  }
  if (num == 1) return 1; else return 0;
}