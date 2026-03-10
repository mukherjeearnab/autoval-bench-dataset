
#include <stdio.h>



int solve_student(int num) {
    int rev = 0;
    int i = 0;
    while(i < 10){
        rev = rev * 10 + num % 10;
        num /= 10;
        if(num == 0) break;
    }
    return rev;
}