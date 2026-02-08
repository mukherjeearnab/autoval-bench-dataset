/* Student 7 */
#include <stdio.h>



int solve_student(int num) {
    int reversed_num = 0;
    int temp = num;
    while(temp != 0){
        int digit = temp % 10;
        reversed_num = reversed_num * 10 + digit;
        temp /= 10;
    }
    return reversed_num;
}