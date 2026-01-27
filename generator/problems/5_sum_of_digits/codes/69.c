/* Student 9 */
#include <stdio.h>



int solve_student(int num) {
  int sum = 0;
  while(num > 0){
    sum += num % 10;
    num--;
  }
  return sum;
}