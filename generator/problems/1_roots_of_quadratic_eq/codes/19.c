/* Student 9 - Incorrect */
#include <stdio.h>



int solve_student(int a, int b, int c) {
  int discriminant = b * b - 4 * a * c;
  printf("%d\n", discriminant); //prints instead of returning
}