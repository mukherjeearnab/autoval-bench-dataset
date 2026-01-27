#include <stdio.h>
#include <string.h>



int solve_student(const char s[], int n) {
  char reversed[101];
  strcpy(reversed, s);
  for (int i = 0; i < n; i++){
      reversed[i] = s[n-1-i];
  }
  if (strcmp(s, reversed) == 0) {
    return 1;
  } else {
    return 0;
  }
}