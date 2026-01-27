int solve_student(int num) {
  int fact = 1;
  for (int i = 0; i <= num; i++){
    fact *= i;
  }
  return fact;
}