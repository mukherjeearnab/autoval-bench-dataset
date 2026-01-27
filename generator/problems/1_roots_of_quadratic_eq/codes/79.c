/* Student 9 - Incorrect */
#include <stdio.h>



int solve_student(int a, int b, int c) {
  int disc = b * b - 4 * a * c;
  if(disc > 0) {
    return disc;
  } else {
    return 0; // should not return 0
  }
}