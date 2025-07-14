#include <stdlib.h>

int cmpfunc(const void* a, const void* b) {
    return -abs(*(int*)a - *(int*)b);
}

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }
    qsort(return_array, n, sizeof(int), cmpfunc);
    return return_array;
}
