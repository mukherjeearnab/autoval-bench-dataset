#include <stdio.h>



int solve_student(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] > 0)
            count++;
    } 
    return count;
}