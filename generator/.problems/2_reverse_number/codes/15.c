int solve_student(int n) {
  long long reversed = 0;
  while (n != 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  if (reversed > 2147483647 || reversed < -2147483648) {
    return 0;
  } else {
    return (int)reversed;
  }
}