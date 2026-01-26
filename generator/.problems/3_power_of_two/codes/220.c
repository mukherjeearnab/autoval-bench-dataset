int solve_student(int n) {
  int i = 0;
  while (i < 32) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      return 0;
    }
    i++;
  }
  return 1;
}