int solve_student(int n) {
  if (n <= 0) return 0;
  int a = 0;
  while (n != 1 && a < 1000) {
    int temp = n;
    n = 0;
    while (temp > 0) {
      int digit = temp % 10;
      n += digit * digit;
      temp /= 10;
    }
    a++;
  }
  return n == 1;
}