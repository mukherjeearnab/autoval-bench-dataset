int solve_student(int n) {
  long long reversed = 0;
  int original_sign = 1;
  if (n < 0) {
    original_sign = -1;
    n = -n;
  }
  while (n > 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  if (reversed > INT_MAX || reversed < INT_MIN) {
    return 0;
  } else {
    return (int)(original_sign * reversed);
  }
}