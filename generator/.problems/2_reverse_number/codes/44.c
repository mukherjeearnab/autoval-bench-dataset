int solve_student(int n) {
  long long rev = 0;
  int temp = n;
  while (temp != 0) {
    rev = rev * 10 + temp % 10;
    temp /= 10;
  }
  if (rev > INT_MAX || rev < INT_MIN) {
    return 0;
  } else {
    return (int)rev;
  }
}