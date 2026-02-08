#include <stdio.h>



int solve_student(char* str, int len) {
    int i = 0;
    int j = len;
    while(i < j){
        if(str[i] != str[j]) return 0;
        i++;
        j--;
    }
    return 1;
}