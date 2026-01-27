#include <limits.h>



int solve_student(int* arr, int n) {
    int minimum = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}