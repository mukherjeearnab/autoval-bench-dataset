/* Student 9 */
#include <stdio.h>



int solve_student(int num) {
    int reversed_num = 0;
    for (int i = 0; i < 10; i++) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    return reversed_num;
}