int solve_student(int n) {
  int temp = n;
  while (temp > 1) {
    if(temp % 2 != 0) return 0;
    temp /= 2;
  }
  return 1;
}