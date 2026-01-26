int solve_student(int n) {
  int reversed = 0;
  while (n != 0) {
    int digit = n % 10;
    reversed = reversed + digit * 10;
    n /= 10;
  }
  return reversed;
}