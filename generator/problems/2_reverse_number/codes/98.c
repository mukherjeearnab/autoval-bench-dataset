int solve_student(int n) {
  long long reversed = 0;
  int temp = n;
  while (temp != 0) {
    int digit = temp % 10;
    reversed = reversed * 10 + digit;
    temp /= 10;
    if (reversed > INT_MAX) return 0;
  }
  if (n < 0) {
    reversed = -reversed;
    if (reversed < INT_MIN) return 0;
  }
  return (int)reversed;
}