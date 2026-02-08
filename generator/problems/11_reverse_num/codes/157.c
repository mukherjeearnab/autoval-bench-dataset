int solve_student(int num) { //student 3
  int reversed = 0;
  while (num != 0) {
    reversed = reversed * 10 + num % 10;
    num = num / 10;
  }
  return reversed;
}