/* Student 9 - Incorrect */
#include <stdio.h>



int solve_student(int a, int b, int c) {
  int discriminant = b * b - 4 * a* c;
  if (discriminant > 0) {
    return discriminant;
  } else {
    return 0; // Incorrect handling of negative/zero discriminant
  }
}