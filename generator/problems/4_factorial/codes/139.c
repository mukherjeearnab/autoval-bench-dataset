int solve_student(int num) {
  int factorial = 1;
  if(num > 12){
    return -1; // Handle overflow/invalid input
  }
  for (int i = 1; i <= num; i++) {
      factorial *=i;
  }
  return factorial;
}