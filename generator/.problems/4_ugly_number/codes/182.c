int solve_student(int n) {
  int i;
  if (n <= 0) return 0;
  for (i = 0; i < 2; i++){
      while (n%2 == 0)
        n = n / 2;
  }
  while (n % 3 == 0) n /= 3;
  while (n % 5 == 0) n /= 5;
  if (n == 1) return 1;
  else return 0;
}