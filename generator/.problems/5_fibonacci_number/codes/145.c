int solve_student(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else {
    int first = 0, second = 1, next;
    for (int i = 2; i <= n; i++) {
      next = first + second;
      first = second;
      second = next;
    }
    return second;
  }
}