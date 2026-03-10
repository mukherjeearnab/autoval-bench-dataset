
#include <stdio.h>



int solve_student(int* a, int size) {
    for (int i = 1; i < size; i++) {
        if(a[i] < a[i-1]) return 0;
    }
    return 1;
}