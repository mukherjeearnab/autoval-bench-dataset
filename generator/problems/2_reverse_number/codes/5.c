int solve_student(int n) {
  long long num = n;
  long long reversed = 0;
  if (num < 0) {
    num = -num;
  }
  while (num > 0) {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }
  if (n < 0) {
    reversed = -reversed;
  }
  if (reversed > INT_MAX || reversed < INT_MIN) {
    return 0;
  }
  return (int)reversed;
}