/* Student 6 - Incorrect */
#include <stdio.h>



int solve_student(int a, int b, int c) {
  int discriminant = b * b + 4 * a * c; // Incorrect sign
  return discriminant;
}