int solve_student(int n) {
  int num = n;
  int sum = 0;
  int count = 0;
  while (num != 1 && count < 1000) {
    while (num > 0) {
      int digit = num % 10;
      sum += digit * digit;
      num /= 10;
    }
    num = sum;
    sum = 0;
    count++;
  }
  if(count == 1000) return 0;
  return num == 1;
}