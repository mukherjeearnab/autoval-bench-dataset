int solve_student(int num) { // Calculate factorial iteratively
  int factorial = 1;
  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }
  return factorial;
}