#include <stdio.h>



int solve_student(int num) {
  if (num == 0) return 1;
  int result = num;
  for (int i = num - 1; i >= 1; i--) {
    result *= i;
  }
  return result;
}