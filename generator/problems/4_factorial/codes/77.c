#include <stdio.h>



int solve_student(int num) {
  long long res = 1;
  for (int i = 2; i <= num; ++i) {
    res *= i;
  }
  return res;
}