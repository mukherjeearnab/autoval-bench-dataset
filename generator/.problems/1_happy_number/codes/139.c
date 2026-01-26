int sum_sq(int n) {
  int s = 0;
  while (n) {
    int d = n % 10;
    s += d * d;
    n /= 10;
  }
  return s;
}

int solve_student(int n) {
  int a = n;
  int b = n;
  while (a != 1 && b != 1) {
    a = sum_sq(a);
    b = sum_sq(sum_sq(b));
    if (a == b) break;
  }
  return a == 1;
}