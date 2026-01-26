int solve_student(int n) {
  int i;
  if (n < 0) return 0;
  for (i = 0; i < n; i++){
    if (n % 2 == 0) n = n / 2;
    if (n % 3 == 0) n = n / 3;
    if (n % 5 == 0) n = n / 5;
  }
  if (n == 1) return 1;
  else return 0;
}