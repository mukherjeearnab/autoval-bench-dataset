#include <stdio.h>



int solve_student(int num) {
  int result = num / 2;
  if (result * 2 == num) {
    return 1;
  } else {
    return 0;
  }
}