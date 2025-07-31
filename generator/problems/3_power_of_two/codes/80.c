int solve_student(int n) {
  int result = 1;
  if (n <= 0) {
    return 0;
  }
  while (n > 1) {
    if (n % 2 != 0) {
      result = 0;
      break;
    }
    n /= 2;
  }
  return result;
}