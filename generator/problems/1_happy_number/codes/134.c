int solve_student(int n) {
  int a = n;
  while (a != 1 && a != 4) {
    int new_num = 0;
    while (n > 0) {
      int digit = n % 10;
      new_num += digit * digit;
      n /= 10;
    }
    n = new_num;
  }
  if (n == 1) return 1;
  return 0;
}