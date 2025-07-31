int solve_student(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  int result = solve_student(n - 1) + solve_student(n - 2);
  return result;
}