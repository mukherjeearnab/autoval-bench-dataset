int solve_student(int n) {
  if (n <= 0) {
    return 0;
  }
  long long num = n;
  while (num % 2 == 0) {
    num /= 2;
  }
  if (num == 1) {
    return 1;
  } else {
    return 0;
  }
}