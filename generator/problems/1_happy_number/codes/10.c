int solve_student(int n) {
  if (n == 1) return 1;
  if (n <= 0) return 0;
  int temp = n;
  while (temp > 0) {
    int digit = temp % 10;
    n -= digit * digit;
    temp /= 10;
  }
  if (n == 1) return 1;
  if(n == 0) return 0; 
  return solve_student(n);
}