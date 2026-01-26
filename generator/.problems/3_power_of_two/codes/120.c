int solve_student(int n) {
  if (n <= 0) return 0;
  unsigned int num = n;
  int count = 0;
  while (num > 0) {
    if (num % 2 == 0) {
      num /= 2;
    } else {
      return 0;
    }
    count++;
  }
  return 1;
}