int solve_student(int n) {
  if (n == 1) return 1;
  if (n <= 0) return 0;
  int seen[1000] = {0};
  while (n != 1 && seen[n] == 0) {
    seen[n] = 1;
    int temp = n;
    int sum = 0;
    while (temp > 0) {
      int digit = temp % 10;
      sum += digit * digit;
      temp /= 10;
    }
    n = sum;
  }
  return n == 1;
}