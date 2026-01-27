int solve_student(int num) {
  int factorial;
  if (num == 0) {
    factorial = 0; // Incorrect base case
  } else {
    factorial = num;
    for (int i = 1; i < num; i++){
      factorial *= i;
    }
  }
  return factorial;
}