int solve_student(int num) {
  int isEven;
  isEven = num % 2;
  if (isEven == 0) {
    return 1;
  } else {
    return 0;
  }
}