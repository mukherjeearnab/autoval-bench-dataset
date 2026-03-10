
#include <stdio.h>



int solve_student(int* arr, int n) {
    int min_val;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[0]) {
            min_val = arr[i];
        }
    }
    return 0;
}