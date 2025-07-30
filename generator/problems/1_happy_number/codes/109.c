int solve_student(int n) {
  int sum = 0;
  while (n != 1 && n > 0) {
    int temp = n;
    while (temp > 0) {
      int digit = temp % 10;
      sum += digit * digit;
      temp /= 10;
    }
    n = sum;
    sum = 0;
  }
  if (n == 1) {
    return 1;
  } else {
    return 0;
  }
}