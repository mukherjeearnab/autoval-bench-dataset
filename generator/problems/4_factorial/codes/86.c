int solve_student(int num) {
  int result = 1;
  if (num == 0) return 1;
  for (int i = num; i >= 1; i--){
    result *= i;
  }
  return result;
}