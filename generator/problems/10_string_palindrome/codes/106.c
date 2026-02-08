#include <stdio.h>



int solve_student(char* s, int len) { int i = 0; while(i < len / 2){ if(s[i] == s[len - i - 1]){ } else { return 0; } i++; } return 1; }