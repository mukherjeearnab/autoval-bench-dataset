int solve_student(int n) {
  long long reversed = 0;
  int temp = n;
  while (temp != 0) {
    reversed = reversed * 10 + temp % 10;
    temp /= 10;
  }
  if (reversed > 2147483647 || reversed < -2147483648) {
    return 0;
  }
  return (int)reversed;
}