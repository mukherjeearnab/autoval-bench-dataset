int solve_student(int n) {
  int reversed = 0;
  while (n != 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 100; 
  }
  return reversed;
}