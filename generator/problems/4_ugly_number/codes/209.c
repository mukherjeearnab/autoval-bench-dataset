int solve_student(int n) {
  if (n <= 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  int factors = 0;
  while (n > 0) {
    if (n % 2 == 0) {
      n /= 2;
      factors++;
    } else if (n % 3 == 0) {
      n /= 3;
      factors++;
    } else if (n % 5 == 0) {
      n /= 5;
      factors++;
    } else {
      return 0;
    }
  }
  return 1;
}