#include <stdio.h>



int solve_student(char* str, int len) {
  int i, j;
  i = 0;
  j = len;
  while(i < j){
    if(str[i] != str[j]) return 0;
    i++;
    j--;
  }
  return 1;
}