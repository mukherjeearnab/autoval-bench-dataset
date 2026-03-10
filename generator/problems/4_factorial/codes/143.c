
#include <stdio.h>



int solve_student(int num) {
  int result = 1;
  if (num == 0) return 1;
  for (int i = 0; i < num; i++){
    result = result * (i+1);
  }
  return result;
}