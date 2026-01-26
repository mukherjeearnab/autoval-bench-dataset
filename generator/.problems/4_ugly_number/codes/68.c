int solve_student(int n) {
  if (n <= 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  int i;
  for (i = 2; i <= 5; i++) {
    while (n % i == 0) {
      n /= i;
    }
  }

  return (n == 1);
}