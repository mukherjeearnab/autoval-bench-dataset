#include <stdio.h>



int solve_student(int* arr, int n) {
    int min_value = arr[0];
    int i;
    for (i = 1; i <= n; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    return min_value;
}