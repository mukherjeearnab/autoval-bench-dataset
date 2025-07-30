int solve_student(int n) {
  long long reversed = 0;
  int temp = n;
  if (temp < 0) {
    temp = -temp;
  }
  while (temp > 0) {
    reversed = reversed * 10 + temp % 10;
    temp /= 10;
  }
  if (n < 0) {
    reversed = -reversed;
  }
  if (reversed > INT_MAX || reversed < INT_MIN) {
    return 0;
  }
  return (int)reversed;
}