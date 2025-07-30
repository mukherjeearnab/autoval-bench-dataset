int solve_student(int n) {
  int seen[1000] = {0};
  int temp;
  while (n != 1 && n > 0) {
    temp = n;
    n = 0;
    while (temp > 0) {
      int digit = temp % 10;
      n += digit * digit;
      temp /= 10;
    }
    if (seen[n] == 1) return 0;
    seen[n] = 1;
  }
  return (n == 1);
}