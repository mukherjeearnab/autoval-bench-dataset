#include <stdio.h>



int solve_student(int num) {
  // Check if the number is even
  if (num % 2 == 0) {
    return 1; // Return 1 if even
  } else {
    return 0; // Return 0 if odd
  }
}