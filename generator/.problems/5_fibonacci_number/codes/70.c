int solve_student(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  int result = 0;
  int first = 0;
  int second = 1;
  for (int i = 2; i <= n; i++){
      result = first + second;
      first = second;
      second = result;
  }
  return result;
}