int solve_student(int n) {
  int num = n;
  int result = 0;
  while (num != 1 && num != 4) {
    while (num > 0) {
      int digit = num % 10;
      result += digit * digit;
      num /= 10;
    }
    num = result;
    result = 0;
  }
  if (num == 1) return 1;
  else return 0;
}