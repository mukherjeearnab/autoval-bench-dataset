int solve_student(int n) {
  if (n == 0) {
    return 0;
  }
  while (n % 2 == 0) {
    n = n / 2;
  }
  if (n == 1) {
    return 1;
  } else {
    return 0;
  }
}