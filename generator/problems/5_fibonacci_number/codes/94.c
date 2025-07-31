int solve_student(int n) {
  if (n < 0) return -1; 
  if (n == 0) return 0;
  if (n == 1) return 1;
  int f0 = 0;
  int f1 = 1;
  int f2;
  for (int i = 2; i <= n; i++){
    f2 = f0 + f1;
    f0 = f1;
    f1 = f2;
  }
  return f1;
}