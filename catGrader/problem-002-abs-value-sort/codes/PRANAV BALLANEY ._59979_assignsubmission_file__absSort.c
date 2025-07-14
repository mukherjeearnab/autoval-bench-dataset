#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int* solve_student(int arr[], int n) {
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = abs(arr[i]);
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

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }

    return return_array;
}
