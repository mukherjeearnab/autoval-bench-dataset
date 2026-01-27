/* Student 4 */
#include <stdio.h>



int* solve_student(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i];
        arr[n - i] = temp;
    }
    return arr;
}