#include <stdio.h>



int solve_student(int a, int b) {
  int sum = a;
  for(int i = 0; i < b; i++){
    sum++;
  }
  return sum;
}