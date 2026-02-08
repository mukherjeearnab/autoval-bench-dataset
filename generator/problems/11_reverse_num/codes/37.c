#include <stdio.h>



int solve_student(int num) {
  int reversed = 0;
  if (num < 0) num = -num; //handle negative numbers
  while (num > 0) {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }
  return reversed;
}