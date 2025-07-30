int digitSquareSum(int num) {
  int sum = 0;
  while (num > 0) {
    int digit = num % 10;
    sum += digit * digit;
    num /= 10;
  }
  return sum;
}

int solve_student(int n) {
  int slow = n;
  int fast = n;
  do {
    slow = digitSquareSum(slow);
    fast = digitSquareSum(digitSquareSum(fast));
  } while (slow != fast);
  return (slow == 1);
}