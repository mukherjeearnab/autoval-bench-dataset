/* Student 7 */
#include <stdio.h>



int solve_student(int num) {
  if (num == 0) {
    return 1;
  } else {
    int result = 1;
    for (int i = 1; i <= num; i++) {
      result *= i;
    }
    return result;
  }
}