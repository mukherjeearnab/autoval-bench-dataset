#include <stdio.h>



int solve_student(int* a, int size) {
    int pos_count = 0;
    for (int i = 0; i < size; ++i) {
        if (a[i] > 0) {
            pos_count++;
        }
    }
    return pos_count;
}