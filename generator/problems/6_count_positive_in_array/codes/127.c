#include <stdio.h>



int solve_student(int* arr, int n) {
    int i, cnt = 0;
    for (i = 0; i < n; i++){
        if(arr[i] > 0){
            cnt++;
        }
    }
    return cnt;
}