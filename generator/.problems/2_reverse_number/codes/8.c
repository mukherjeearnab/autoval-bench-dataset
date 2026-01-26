int solve_student(int n) {
  long long reversed_num = 0;
  while (n != 0) {
    int remainder = n % 10;
    reversed_num = reversed_num * 10 + remainder;
    n /= 10;
  }
  if (reversed_num > 2147483647 || reversed_num < -2147483648) {
    return 0;
  } else {
    return (int)reversed_num;
  }
}