#include <stdio.h>



int solve_student(int num) { int rev = 0; int sign = 1; if (num < 0) { sign = -1; num = -num; } while (num > 0) { int lastDigit = num % 10; rev = rev * 10 + lastDigit; num /= 10; } return rev * sign; }