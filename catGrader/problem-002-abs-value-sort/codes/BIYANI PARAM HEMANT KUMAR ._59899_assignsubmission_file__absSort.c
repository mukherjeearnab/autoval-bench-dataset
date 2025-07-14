#include <stdio.h>
#include <stdlib.h>

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int i;
    for (i = 0; i < n && arr[i] < 0; i++) {
        arr[i] = -arr[i];
        // printf("%d |", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return_array = arr;

    return return_array;
}
