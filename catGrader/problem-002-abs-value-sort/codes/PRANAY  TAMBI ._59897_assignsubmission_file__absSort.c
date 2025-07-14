#include <stdlib.h>

int cmpfunc(const void* x, const void* y) {
    return abs((int)x - (int)y);
}
int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
        return_array[j] = arr[j];
    }
    qsort(return_array, n, sizeof(int), cmpfunc);
    return return_array;
}