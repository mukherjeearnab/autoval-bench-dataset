#include <stdlib.h>

int *solve_student(int arr[], int n) {
    // create a duplicate answer array
    // int *return_array = (int *)malloc(n * sizeof(int));
    // if (return_array == NULL) {
    //     return NULL;  // Handle memory allocation failure
    // }
    for (int i = 0; i < n; i++)
        arr[i] = -1000;

    return arr;
}
