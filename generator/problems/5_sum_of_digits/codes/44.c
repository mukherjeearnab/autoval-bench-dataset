int solve_student(int num) {
  int sum = 0;
  for (int i = 0; i <= num; i++) {
    sum += i % 10;
  }
  return sum;
}