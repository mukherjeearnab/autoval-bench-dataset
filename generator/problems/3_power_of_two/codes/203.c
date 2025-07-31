int solve_student(int n) {
  int result = 1;
  while (result < n) {
    result = result * 2;
  }
  if (result == n) return 1;
  else return 0;
}