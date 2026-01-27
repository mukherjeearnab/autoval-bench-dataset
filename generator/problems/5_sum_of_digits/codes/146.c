#include <stdlib.h>



int solve_student(int num) { int total = 0; char str[20]; sprintf(str, "%d", num); for(int i = 0; str[i] != '\0'; i++){ total += str[i] - '0'; } return total; }