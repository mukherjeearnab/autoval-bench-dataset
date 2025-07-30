int solve_student(int n) {
  int reversed = 0;
  while (n != 0) {
    int pop = n % 10;
    n /= 10;
    if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
      return 0;
    }
    reversed = reversed * 10 + pop;
  }
  return reversed;
}