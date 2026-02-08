int solve_student(int num) {
  int rev = 0;
  int originalNum = num;
  while (num > 0) {
    rev = rev * 10 + num % 10;
    num /= 10;
  }
  return rev;
}