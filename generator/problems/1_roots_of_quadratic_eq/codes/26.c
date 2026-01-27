/* Student 6 - Incorrect */
#include <stdio.h>



int solve_student(int a, int b, int c) {
  int discriminant = b - 4 * a * c; //Missing square
  return discriminant;
}