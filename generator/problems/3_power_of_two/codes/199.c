int solve_student(int n) {
  int i = 0;
  while (i <= n) {
    if (i == n) {
      return 1;
    }
    i = i + 1;
    if(i % 2 != 0) continue;
  }
  return 0;
}