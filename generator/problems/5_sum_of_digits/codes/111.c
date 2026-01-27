int solve_student(int num) { //calculates the sum of digits
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}