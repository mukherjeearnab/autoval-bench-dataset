int solve_student(int num) {
  int fact = 1;
  int i = 1;
  while (i <= num) {
    fact = fact * i;
    i++;
  }
  return fact;
}