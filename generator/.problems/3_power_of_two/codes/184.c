int solve_student(int n) {
  if (n == 0) {
    return 0;
  }
  int temp = n;
  while (temp > 1) {
    if (temp % 2 != 0) {
      return 0;
    }
    temp++;
  }
  return 1;
}