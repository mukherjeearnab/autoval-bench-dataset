int solve_student(int n) {
  int i = 1;
  do {
    if (i == n) return 1;
    i * 2;
  } while (i < n);
  return 0;
}