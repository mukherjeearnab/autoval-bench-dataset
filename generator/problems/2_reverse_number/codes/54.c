int solve_student(int n) {
  long long num = n;
  long long reversed_num = 0;
  if (num < 0) {
    num = -num;
  }
  while (num > 0) {
    reversed_num = (reversed_num * 10) + (num % 10);
    num /= 10;
  }
  if (n < 0) {
    reversed_num = -reversed_num;
  }
  if (reversed_num > INT_MAX || reversed_num < INT_MIN) {
    return 0;
  } else {
    return (int)reversed_num;
  }
}