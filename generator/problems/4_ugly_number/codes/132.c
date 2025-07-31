int solve_student(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;
  if (n % 2 == 0) solve_student(n / 2);
  else if (n % 3 == 0) solve_student(n / 3);
  else if (n % 5 == 0) solve_student(n / 5);
  else return 0;
  return 1;
}