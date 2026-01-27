/* Student 2 */
#include <stdio.h>



int solve_student(int num) {
  int total = 0;
  if (num == 0) return 0;
  while (num > 0) {
    total += num % 10;
    num = num / 10;
  }
  return total;
}