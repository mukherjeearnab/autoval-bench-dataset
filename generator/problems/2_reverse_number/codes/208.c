int solve_student(int n) {
  int reversed = 0;
  while (n) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
    if (reversed > 1000000000) {
      return 0;
    }
  }
  return reversed;
}