#include <stdio.h>



int solve_student(int a, int b, int c) { int max; if (a > b) max = a; else max = b; if (c > max)  return c; else return max; }