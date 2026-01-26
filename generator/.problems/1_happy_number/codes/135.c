int solve_student(int n) {
  int sum = 0;
  int num = n;
  while (num > 0) {
    int digit = num % 10;
    sum += digit * digit;
    num /= 10;
  }
  if (sum == 1) return 1;
  if (sum == n) return 0;
  return solve_student(sum);
}