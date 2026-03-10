
#include <stdio.h>



int solve_student(int* arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
       min = min + arr[i];
    }
    return min;
}