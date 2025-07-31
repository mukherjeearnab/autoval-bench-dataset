int solve_student(int n) {
  if (n <= 0) return 0;
  int i = 1;
  while (i < n) {
    i = i + 2;
  }
  if (i == n) return 1;
  else return 0;
}