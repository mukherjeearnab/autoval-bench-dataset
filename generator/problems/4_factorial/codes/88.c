int solve_student(int num) {
  int factorial = 0;
  if(num == 0)
    return 1;
  for(int i = 1; i <= num; i++){
    factorial *= i;
  }
  return factorial;
}