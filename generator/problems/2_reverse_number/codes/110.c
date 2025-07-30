int solve_student(int n) {
  long long reversed = 0;
  int original = n;
  while (n != 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }
  if (reversed > INT_MAX || reversed < INT_MIN) {
    return 0;
  } else {
    return (int)reversed;
  }
}