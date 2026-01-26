int solve_student(int n) {
  if (n <= 0) return 0;
  int a = 0, b = 0;
  while(n != 1 && a != b) {
    a = n;
    int sum = 0;
    while(a > 0) {
      int digit = a % 10;
      sum += digit * digit;
      a /= 10;
    }
    n = sum;
    b = n;
  }
  return n == 1;
}