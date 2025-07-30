int solve_student(int n) {
  int slow = n;
  int fast = n;

  do {
    slow = digit_square_sum(slow);
    fast = digit_square_sum(digit_square_sum(fast));
  } while (slow != fast);

  return (slow == 1);
}

int digit_square_sum(int num) {
  int sum = 0;
  while (num > 0) {
    int digit = num % 10;
    sum += digit * digit;
    num /= 10;
  }
  return sum;
}