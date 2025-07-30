int solve_student(int n) {
  if (n <= 0) return 0;
  int seen[1001];
  for (int i = 0; i < 1001; i++) {
    seen[i] = 0;
  }
  while (n != 1 && seen[n] == 0) {
    seen[n] = 1;
    int temp = n;
    n = 0;
    while (temp > 0) {
      int digit = temp % 10;
      n += digit * digit;
      temp /= 10;
    }
  }
  return n == 1;
}