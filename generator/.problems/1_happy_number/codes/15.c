int solve_student(int n) {
  int a = n;
  while (a != 1 && a > 0) {
    int b = 0;
    while (a > 0) {
      int digit = a % 10;
      b += digit * digit;
      a /= 10;
    }
    a = b;
  }
  if (a == 1) return 1; else return 0;
}