int solve_student(int num) {
  int result = 1;
  if (num > 0) {
    for (int counter = 1; counter <= num; counter++) {
      result *= counter;
    }
  }
  return result;
}