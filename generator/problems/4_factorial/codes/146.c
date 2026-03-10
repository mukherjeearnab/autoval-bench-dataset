
#include <stdio.h>



int solve_student(int num) {
  int i = 1;
  int fact = 1;
  while(i <= num){
    fact = fact * i;
    i++;
  }
  return fact;
}