int solve_student(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;
  int factors = 0;
  while (n % 2 == 0) {
    n /= 2;
    factors++;
  }
  while (n % 3 == 0) {
    n /= 3;
    factors++;
  }
  while (n % 5 == 0) {
    n /= 5;
    factors++;
  }
  if(n == 1 && factors > 0) return 1; 
  return 0;
}