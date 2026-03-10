
#include <stdio.h>



int solve_student(int num) {
  int s = 0;
  while (num != 0) {
    s += num % 10;
    num /= 10;
  }
  return s;
}