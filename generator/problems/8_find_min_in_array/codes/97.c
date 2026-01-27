/* Student 7 */
#include <stdio.h>



int solve_student(int* arr, int n) {
    int min = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}