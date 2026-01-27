#include <stdio.h>

int main(){ return 0; }

int solve_student(int num) { int sum = 0; while(num > 0) sum += num % 10; return sum; }