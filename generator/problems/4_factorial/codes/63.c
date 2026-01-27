int solve_student(int num) {
  if (num == 0) return 1;
  int res = 1;
  for (int i = 1; i < num; i++) {
    res = res * i;
  }
  return res;
}