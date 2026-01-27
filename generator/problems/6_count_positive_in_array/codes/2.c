#include <stdio.h>



int solve_student(int* a, int size) {
    int positive_count = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (a[i] > 0) {
            positive_count++;
        }
    }
    return positive_count;
}