#include <stdio.h>

int main() {
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  printf("%d\n", solve_student(n1, n2));
  return 0;
}

int solve_student(int a, int b) {
  int sum = a + b;
  return sum;
}