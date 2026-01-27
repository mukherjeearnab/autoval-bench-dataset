#include <stdio.h>



int solve_student(int* arr, int n) {
    int pos_count = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > 0) {
            pos_count++;
        }
    }
    return pos_count;
}