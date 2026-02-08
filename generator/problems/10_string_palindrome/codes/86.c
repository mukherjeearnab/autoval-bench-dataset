#include <string.h>



int solve_student(char* s, int len) { char rev[101]; int i; for(i = 0; i < len; i++) rev[i] = s[len - 1 - i]; if (strcmp(s, rev) == 0) return 1; else return 0; }