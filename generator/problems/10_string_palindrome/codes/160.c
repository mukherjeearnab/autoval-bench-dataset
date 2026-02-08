#include <string.h>



int solve_student(char* str, int len) { int i; for(i = 0; i < len; i++){ if (str[i] != str[len]){ return 0; } } return 1; }