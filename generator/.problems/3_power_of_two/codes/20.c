int solve_student(int n) {
  if (n <= 0) return 0;
  int count = 0;
  while (n > 0) {
    if (n % 2 == 0) {
      n /= 2;
      count++;
    } else {
      return 0;
    }
  }
  return 1;
}