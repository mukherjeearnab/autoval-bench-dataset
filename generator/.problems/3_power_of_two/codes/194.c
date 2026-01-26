int solve_student(int n) {
  int power = 1;
  if (n == 0) {
    return 1;
  }
  while (power < n) {
    power = power + 2;
  }
  if (power == n) {
    return 1;
  } else {
    return 0;
  }
}