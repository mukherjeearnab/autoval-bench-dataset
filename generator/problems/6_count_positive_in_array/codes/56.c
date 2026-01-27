#include <stdio.h>



int solve_student(int* arr, int n) {
    int i, positive_count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive_count++;
    }
    return positive_count;
}