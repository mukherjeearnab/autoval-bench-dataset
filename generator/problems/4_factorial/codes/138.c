#include <stdio.h>



int solve_student(int num) {
  int i = 1;
  int result = 1;
  while (i <= num)
    result *= i++;
  return result;
}