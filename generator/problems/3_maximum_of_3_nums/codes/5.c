#include <stdio.h> int find_max(int x, int y) { if(x > y) return x; else return y; }



int solve_student(int a, int b, int c) { return find_max(find_max(a, b), c); }