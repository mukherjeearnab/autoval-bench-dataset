/* Student 8 */
#include <stdio.h>



int solve_student(int* arr, int n) {
    int min_val = arr[0];
    for (int i = 0; i < n; i++) {
      min_val = arr[i];
    }
    return min_val;
}