int solve_student(int n) {
  int reversed = 0;
  while (n != 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  if (reversed > 2147483647) {
    return 0;
  }
  return reversed;
}