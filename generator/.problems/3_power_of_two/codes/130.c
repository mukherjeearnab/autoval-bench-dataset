int solve_student(int n) {
  int count = 0;
  if (n <= 0) return 0;
  while (n > 0) {
    if (n % 2 == 0) {
      n /= 2;
      count++;
    } else {
      if (count == 0) return 0;
      break;
    }
  }
  return count > 0 && n == 1;
}