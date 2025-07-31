int solve_student(int n) {
  if (n < 0) return -1; 
  if (n == 0) return 0;
  if (n == 1) return 1;
  return solve_student(n - 1) + solve_student(n - 2);
}