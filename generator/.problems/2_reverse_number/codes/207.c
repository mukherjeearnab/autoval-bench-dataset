int solve_student(int n) {
  int rev = 0;
  int original = n;
  while (n != 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
  }
  if (rev > original && original > 0) return 0; 
  if (rev < original && original < 0) return 0;
  return rev;
}