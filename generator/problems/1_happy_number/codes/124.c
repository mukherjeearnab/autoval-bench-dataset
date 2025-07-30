int solve_student(int n) {
  int x = n;
  int y = n;

  while (x != 1 && y != 1) {
    x = sum_of_squares(x);
    y = sum_of_squares(sum_of_squares(y));

    if (x == y) {
      return 0;
    }
  }

  return (x == 1);
}

int sum_of_squares(int n) {
  int sum = 0;
  while (n > 0) {
    int digit = n % 10;
    sum += digit * digit;
    n /= 10;
  }
  return sum;
}