#include <stdio.h>



int solve_student(const char s[], int n) {
  int i, j;
  j = n;
  for (i = 0; i < n; i++) {
    if (s[i] != s[j]) {
      return 0;
    }
  }
  return 1;
}