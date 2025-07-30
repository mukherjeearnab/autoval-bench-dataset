int sum_of_squares(int n) {
  int sum = 0;
  while (n > 0) {
    int digit = n % 10;
    sum += digit * digit;
    n /= 10;
  }
  return sum;
}

int solve_student(int n) {
  int a = n;
  int b = n;
  while (a != 1 && b != 1) {
    int sum_a = 0;
    while (a > 0) {
      int digit = a % 10;
      sum_a += digit * digit;
      a /= 10;
    }
    a = sum_a;

    int sum_b = 0;
    while (b > 0) {
      int digit = b % 10;
      sum_b += digit * digit;
      b /= 10;
    }
    b = sum_b;
    b = sum_of_squares(b);

    if (a == b) break;
  }
  return a == 1;
}