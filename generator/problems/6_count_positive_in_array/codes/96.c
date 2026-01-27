#include <stdio.h>



int solve_student(int *arr, int n) {
    int posCount = 0;
    int i;
    for (i = 1; i < n; i++){
        if(arr[i] > 0){
            posCount++;
        }
    }
    return posCount;
}