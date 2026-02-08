/* Student 3 */
#include <stdio.h>



int solve_student(int num) {
    int reversed = 0;
    int sign = 1;
    if (num < 0) {
        sign = -1;
        num = -num;
    }
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed * sign;
}