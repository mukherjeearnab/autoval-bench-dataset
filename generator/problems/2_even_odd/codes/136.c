#include <stdbool.h>



int solve_student(int num) {
  bool is_even = (num % 2 == 0);
  if (is_even) {
    return 1;
  } else {
    return 0;
  }
}