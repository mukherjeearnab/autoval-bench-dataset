int solve_student(int n) {
  if (n <= 0) {
    return 0;
  }
  int factors = 0;
  while (n % 2 == 0) {
    factors++;
    n /= 2;
  }
  while (n % 3 == 0) {
    factors++;
    n /= 3;
  }
  while (n % 5 == 0) {
    factors++;
    n /= 5;
  }
  if (n == 1 && factors >= 0) {
    return 1;
  } else {
    return 0;
  }
}