int solve_student(int n) {
  int result = 0;
  if (n > 0) {
    result = 1;
    while (n > 1) {
      if (n % 2 != 0) {
        result = 0;
        break;
      }
      n = n / 2;
    }
  }
  return result;
}