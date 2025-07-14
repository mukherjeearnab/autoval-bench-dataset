#include <stdio.h>
#include <stdlib.h>

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    int start = 0, m;
    int end = n - 1;

    for (int i = 0; i < n; i++) {
        if (abs(arr[end]) < abs(arr[start])) {
            m = abs(arr[start]);
            start++;
        } else {
            m = abs(arr[end]);
            end--;
        }

        return_array[n - i - 1] = m;
    }

    // Uncomment the following line and replace n with size of array
    // return_array = (int*)malloc(n*sizeof(int));
    return return_array;
}
