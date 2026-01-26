int solve_student(int n) {
  int sum = 0;
  while (n > 0) {
    int digit = n % 10;
    sum += digit * digit;
    n /= 10;
  }
  if (sum == 1) {
    return 1;
  } else if (sum == 4) {
    return 0;
  } else {
    return solve_student(sum);
  }
}