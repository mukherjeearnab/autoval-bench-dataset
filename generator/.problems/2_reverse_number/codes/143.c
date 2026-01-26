int solve_student(int n) {
  long long reversed_num = 0;
  while (n != 0) {
    reversed_num = reversed_num * 10 + n % 10;
    n /= 10;
    if (reversed_num > INT_MAX || reversed_num < INT_MIN) {
      return 0;
    }
  }
  return (int)reversed_num;
}