#include <stdio.h>

int main() {
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  printf("%d\n", solve_student(num1, num2));
}

int solve_student(int a, int b) {
  return a + b;
}