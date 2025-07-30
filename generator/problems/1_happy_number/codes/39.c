int solve_student(int n) {
  int x = n;
  int sum = 0;
  while (x > 0) {
    int digit = x % 10;
    sum += digit * digit;
    x /= 10;
  }
  if (sum == 1) {
    return 1;
  } else if (sum == 4) {
    return 0;
  } else {
    return solve_student(sum);
  }
}