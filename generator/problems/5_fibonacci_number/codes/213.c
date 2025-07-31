int solve_student(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  int a = 0, b = 1;
  for (int i = 2; i < n; i++){
    b = a + b;
    a = b;
  }
  return a + b;
}