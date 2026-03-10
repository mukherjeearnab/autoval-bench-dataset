int solve_student(int num) {
  int factorial = 1;
  if(num > 12){
    return -1; 
  }
  for (int i = 1; i <= num; i++) {
      factorial *=i;
  }
  return factorial;
}