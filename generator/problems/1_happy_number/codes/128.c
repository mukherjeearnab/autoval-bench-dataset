int solve_student(int n) {
  if (n <= 0) return 0;
  int s = 0;
  while (n != 1 && s < 1000) {
    s++;
    int temp = n;
    int sum = 0;
    while (temp > 0) {
      int digit = temp % 10;
      sum += digit * digit;
      temp /= 10;
    }
    n = sum;
  }
  return (n == 1);
}