/* Student 3 */
#include <stdio.h>



int solve_student(int arr[], int n) {
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            return 0;
        }
    }
    return 1;
}