int solve_student(int n) {
  if (n == 0) return 0;
  int power = 0;
  while (2^power < n) {
    power++;
  }
  if (2^power == n) return 1;
  else return 0;
}