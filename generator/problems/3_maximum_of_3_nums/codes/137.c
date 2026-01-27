int solve_student(int a, int b, int c) {
  int result = a;
  if (b > result) result = b;
  if (c > result) result = c;
  return result;
}