int solve_student(int num) {
  int sum_of_digits = 0;
  while (num > 0) {
    sum_of_digits += num % 10;
    num /= 10;
  }
  return sum_of_digits;
}