
#include <stdbool.h>



int solve_student(int* a, int size) {
    bool sorted = true;
    for (int i = 0; i < size - 1; i++) {
        if (a[i] > a[i+1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) return 1;
    else return 0;
}