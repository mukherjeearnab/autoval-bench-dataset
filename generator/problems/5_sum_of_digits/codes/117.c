int solve_student(int num) {
  int digitSum = 0;
  while (num != 0) {
    digitSum += num % 10;
    num /= 10;
  }
  return digitSum;
}