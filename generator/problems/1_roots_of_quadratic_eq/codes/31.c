#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%d\n", solve_student(x, y));
  return 0;
}

int solve_student(int a, int b) {
  int sum = a + b;
  return sum;
}