#include <stdio.h>

int main() {
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  printf("Sum: %d\n", solve_student(num1, num2));
  return 0;
}

int solve_student(int a, int b) {
  // Calculate the sum of two integers
  int result = a + b;
  return result;
}