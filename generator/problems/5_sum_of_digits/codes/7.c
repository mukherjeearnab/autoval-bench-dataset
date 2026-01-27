/* Student 7 */
#include <stdio.h>



int solve_student(int num) {
    int sum = 0;
    if (num == 0) return 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}