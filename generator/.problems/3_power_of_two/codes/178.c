int solve_student(int n) {
  int result = 1;
  for (int i = 0; i < n; i++) {
    result *= 2;
  }
  if (result == n) return 1;
  else return 0
}