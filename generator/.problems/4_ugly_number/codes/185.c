int solve_student(int n) {
  int isUgly;
  if (n <= 0) return 0;
  isUgly = 1;
  while (n > 1) {
    if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0) {
      isUgly = 0;
      break;
    }
    n /= 2;
  }
  return isUgly;
}