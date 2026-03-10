
#include <stdio.h>



int solve_student(int num) {
  long long fact = 1;
  for (int i = 1; i <= num; i++) {
    fact *= i;
  }
  return (int)fact;
}