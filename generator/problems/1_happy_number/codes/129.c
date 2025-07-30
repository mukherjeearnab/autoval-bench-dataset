int solve_student(int n) {
  int a = 0;
  while(n != 1 && n != 0) {
    while(n > 0) {
      int b = n % 10;
      a += b * b;
      n /= 10;
    }
    n = a;
    a = 0;
  }
  return n == 1;
}