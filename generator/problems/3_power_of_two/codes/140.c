int solve_student(int n) {
  if (n <= 0) return 0;
  long long temp = n;
  while (temp % 2 == 0) {
    temp /= 2;
  }
  return temp == 1;
}