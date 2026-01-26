int solve_student(int n) {
  int result;
  if (n == 0) {
    result = 0;
  } else if (n == 1) {
    result = 1;
  } else {
    result = solve_student(n - 1) + solve_student(n - 2);
  }
  return result;
}