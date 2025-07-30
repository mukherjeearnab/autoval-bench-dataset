int solve_student(int n) {
  int sum_sq = 0;
  int temp = n;
  while (temp > 0) {
    int digit = temp % 10;
    sum_sq += digit * digit;
    temp /= 10;
  }
  if (sum_sq == 1) {
    return 1;
  } else if (sum_sq == 4) {
    return 0;
  } else {
    return solve_student(sum_sq);
  }
}