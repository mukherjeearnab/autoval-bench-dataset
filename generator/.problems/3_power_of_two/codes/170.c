int solve_student(int n) {
  int flag = 1;
  if (n < 0) flag = 0;
  if (n == 1) return 1;
  while (n > 1) {
    if (n % 2 != 0) flag = 0;
    n = n / 2;
  }
  return flag;
}