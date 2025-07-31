int solve_student(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;
  int result = 1;
  for (int i = 2; i <= n; i++){
    result = result + (result - ( (i == 2) ? 1:0));
  }
  return result;
}