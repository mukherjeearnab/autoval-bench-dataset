/* Student 9 - Incorrect */
#include <stdio.h>



int solve_student(int a, int b, int c) {
  int disc;
  disc = b*b - 4*a*c;
  printf("%d\n", disc); //prints instead of returning
  return 0;
}