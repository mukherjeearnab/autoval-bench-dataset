#include <stdio.h>



int solve_student(const char s[], int n) {
  for(int i = 0; i < n; i++){
    if(s[i] != s[n - i - 1]){
      return 0;
    }
  }
  return 1;
}