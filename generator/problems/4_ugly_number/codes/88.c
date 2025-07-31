int solve_student(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;

  if (n % 2 == 0) solve_student(n / 2);
  if (n % 3 == 0) solve_student(n / 3);
  if (n % 5 == 0) solve_student(n / 5);

  if (n == 1) return 1;
  return 0;
}