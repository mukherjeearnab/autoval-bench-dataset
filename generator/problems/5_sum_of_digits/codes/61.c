
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", solve_student(n));
  return 0;
}

int solve_student(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}