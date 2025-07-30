int solve_student(int n) {
  int temp;
  int seen[10000] = {0};
  while (n != 1 && seen[n] == 0) {
    seen[n] = 1;
    temp = 0;
    while (n > 0) {
      int digit = n % 10;
      temp += digit * digit;
      n /= 10;
    }
    n = temp;
  }
  return n == 1;
}