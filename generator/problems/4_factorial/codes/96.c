int solve_student(int num) {
  if (num == 0) {
    return 1;
  } else {
    int result = num * solve_student(num - 1);
    return result;
  }
}