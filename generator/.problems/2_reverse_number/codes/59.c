int solve_student(int n) {
  long long reversed_num = 0;
  while (n != 0) {
    int pop = n % 10;
    n /= 10;
    if (reversed_num > INT_MAX/10 || (reversed_num == INT_MAX / 10 && pop > 7)) return 0;
    if (reversed_num < INT_MIN/10 || (reversed_num == INT_MIN / 10 && pop < -8)) return 0;
    reversed_num = reversed_num * 10 + pop;
  }
  return (int)reversed_num;
}