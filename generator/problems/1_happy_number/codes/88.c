int solve_student(int n) {
  if (n <= 0) return 0;
  int temp = n;
  int sum = 0;
  while (temp > 0) {
    int digit = temp % 10;
    sum += digit * digit;
    temp /= 10;
  }
  if (sum == 1) return 1;
  if (sum == 4) return 0;
  return solve_student(sum);
}