int solve_student(int n) {
  if (n <= 1)
    return n;
  else
    solve_student(n-1) + solve_student(n-2);
}