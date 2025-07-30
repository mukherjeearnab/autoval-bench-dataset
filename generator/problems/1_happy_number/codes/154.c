int solve_student(int n) {
  int x = n;
  int y = n;
  while (y != 1 && y != 4) {
    int sum = 0;
    while (x > 0) {
      int digit = x % 10;
      sum += digit * digit;
      x /= 10;
    }
    x = sum;
    if (x == 1) return 1;
  }
  return (x == 1);
}