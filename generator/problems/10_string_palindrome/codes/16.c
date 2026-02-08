#include <stdio.h>



int solve_student(char* str, int length) {
  int i = 0;
  while (i < length / 2) {
    if (str[i] != str[length - 1 - i]) {
      return 0;
    }
    i++;
  }
  return 1;
}