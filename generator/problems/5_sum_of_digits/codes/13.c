int solve_student(int num) {
  int total = 0;
  for (int i = 0; i < num; i++) {
    total += num % 10;
    num /= 10;
  }
  return total;
}