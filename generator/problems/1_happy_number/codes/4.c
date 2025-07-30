int solve_student(int n) {
  int temp;
  while (n != 1 && n != 4) {
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