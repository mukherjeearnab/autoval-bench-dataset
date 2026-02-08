#include <string.h>



int solve_student(char* s, int len) { if(len <= 1) return 1; int i = 0; int j = len; while(i<j){ if(s[i]!=s[j]) return 0; i++; j--; } }