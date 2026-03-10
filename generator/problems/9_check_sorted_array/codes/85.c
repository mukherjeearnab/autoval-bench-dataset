
#include <stdio.h>



int solve_student(int* a, int len) {
    int i;
    for (i = 0; i < len - 1; ++i) {
        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}