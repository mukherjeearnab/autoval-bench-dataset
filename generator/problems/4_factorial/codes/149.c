/* Student 9 */
#include <stdio.h>



int solve_student(int num) {
    int result = 1;
    for (int i = 0; i <= num; i++){
        result *= i;
    }
    return result;
}