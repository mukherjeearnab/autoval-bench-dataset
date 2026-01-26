int solve_student(int n) {
  int i = 0;
  if (n <= 0) return 0;
  while (n > 1) {
    n /= 2;
    i++;
  }
  if (n == 1) return 1; else return 0;
}