int solve_student(int n) {
  long long result = 0;
  while (n != 0) {
    result = result * 10 + n % 10;
    n /= 10;
  }
  if (result > 0x7fffffff || result < -0x80000000) {
    return 0;
  }
  return (int)result;
}