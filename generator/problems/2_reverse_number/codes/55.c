int solve_student(int n) {
  long long reversed = 0;
  int temp = n;
  int sign = 1;
  if (temp < 0) {
    sign = -1;
    temp = -temp;
  }
  while (temp > 0) {
    reversed = reversed * 10 + temp % 10;
    temp /= 10;
  }
  reversed *= sign;
  if (reversed > INT_MAX || reversed < INT_MIN) {
    return 0;
  } else {
    return (int)reversed;
  }
}