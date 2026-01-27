/* Student 3 */
#include <stdio.h>

int find_min(int a, int b) {
    return (a < b) ? a : b;
}



int solve_student(int* arr, int n) {
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        min_val = find_min(min_val, arr[i]);
    }
    return min_val;
}