int solve_student(int n) {
  if (n <= 0) return 0;
  int count = 0;
  while (n > 0) {
    if (n % 2 == 1) count++;
    n /= 2;
  }
  return count == 1;
}