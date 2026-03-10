
#include <stdio.h>



int solve_student(int num) {
  int sum = 0;
  for (int i = 0; i < num; i++) {
    sum += num % 10;
  }
  return sum;
}