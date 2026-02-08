int solve_student(int num) {
  int reversedNum = 0;
  while (num > 0) {
    int digit = num % 10;
    reversedNum = reversedNum * 10 + digit;
    num /= 10;
  }
  return reversedNum;
}