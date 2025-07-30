int solve_student(int n) {
  if (n <= 0) return 0;
  int sum = 0;
  while (n != 1 && n < 1000) {
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    n = sum;
    sum = 0;
  }
  if (n == 1) return 1; 
  else return 0;
}