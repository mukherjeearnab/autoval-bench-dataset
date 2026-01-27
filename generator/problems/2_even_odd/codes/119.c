#include <stdio.h>



int solve_student(int num) {
  int r = num % 2;
  if (r == 1)
    return 0;
  else
    return 1;
}