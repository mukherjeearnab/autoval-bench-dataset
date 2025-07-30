int solve_student(int n) {
  if (n <= 0) return 0;
  int temp;
  while (n != 1) {
    temp = 0;
    while(n > 0) {
      int digit = n % 10;
      temp += digit * digit;
      n /= 10;
    }
    if (temp == 1) return 1;
    n = temp;
  }
  return 1;
}