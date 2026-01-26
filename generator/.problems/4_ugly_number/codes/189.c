int solve_student(int n) {
  int isUgly = 1;
  if (n <= 0) {
    isUgly = 0;
  }
  if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0) {
    isUgly = 0;
  }
  return isUgly;
}