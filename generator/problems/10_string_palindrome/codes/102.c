#include <string.h>



int solve_student(char* s, int len) { for (int i = 0; i < len / 2; i++) { if (s[i] != s[len - 1 - i]) { return 0; } } return 1; }