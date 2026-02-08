#include <stdio.h>



int solve_student(int num) { int rev = 0; int temp = num; while (temp > 0) { int remainder = temp % 10; rev = (rev * 10) + remainder; temp /= 10; } return rev; }