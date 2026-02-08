#include <stdio.h>
#include <string.h>



int solve_student(char* str, int len) {
  int i, j;
  j = len - 1;
  for (i = 0; i < len / 2; i++){
    if(str[i] != str[j]){
      return 0;
    }
    j--;
  }
  return 1;
}