#include <stdio.h>



int solve_student(int *numbers, int len) {
    int pos_cnt = 0;
    for(int i=1; i<len; i++){
        if(numbers[i]>0){
            pos_cnt++;
        }
    }
    return pos_cnt;
}