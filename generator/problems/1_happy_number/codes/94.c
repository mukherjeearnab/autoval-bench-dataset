int solve_student(int n) {
  int s = 0;
  while (n != 1 && n != 4) {
    while (n > 0) {
      int digit = n % 10;
      s += digit * digit;
      n /= 10;
    }
    n = s;
    s = 0;
  }
  if(n == 1) return 1;
  else return 0;
}