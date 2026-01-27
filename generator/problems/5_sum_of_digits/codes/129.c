#include <stdlib.h>



int solve_student(int num) { int sum = 0; char str[20]; sprintf(str, "%d", num); for (int i = 0; str[i] != '\0'; i++) { sum += str[i] - '0'; } return sum; }