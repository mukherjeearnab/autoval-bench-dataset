int solve_student(int num) {
  int i = 0;
  int fact = 1;
  while (i <= num) {
    fact *= i;
    i++;
  }
  return fact;
}