#include <stdio.h>
#include <stdlib.h>

int cmpFunc(int a, int b) {
    return b < a;
}

int* solve_student(int arr[], int n) {
    // Write solution here
    qsort(arr, n, sizeof(int), cmpFunc);
    return arr;

    // int* return_array;
    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    // return return_array;
}
