int solve_student(int a, int b, int c) {
  int max_num;
  if (a > b && a > c) {
      max_num = a;
  } else if (b > a && b > c) {
      max_num = b;
  } else {
      max_num = c;
  }
  return max_num;
}