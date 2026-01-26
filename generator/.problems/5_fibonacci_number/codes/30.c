int solve_student(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  int result = 0;
  int prev1 = 1;
  int prev2 = 0;
  for(int i = 2; i <= n; i++){
      result = prev1 + prev2;
      prev2 = prev1;
      prev1 = result;
  }
  return result;
}