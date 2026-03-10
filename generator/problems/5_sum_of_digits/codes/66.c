
#include <stdio.h>



int solve_student(int num) {
  int sum_digits = 0;
  int digit;
  while(num > 0){
    digit = num % 10;
    sum_digits += digit;
    num = num / 10;
  }
  return sum_digits;
}