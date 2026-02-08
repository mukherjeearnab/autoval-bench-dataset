int solve_student(int num) {
  int reversed_num = 0;
  int remainder;
  while(num != 0) {
    remainder = num % 10;
    reversed_num = reversed_num + remainder * 10;
    num = num / 10;
  }
  return reversed_num;
}