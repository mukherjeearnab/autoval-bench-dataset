
#include <stdio.h>
#include <stdlib.h>

int *solve_student(int arr[], int n) {
    // Write solution here
    int i, j;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            arr[i] = arr[i] * (-1);
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n - i; j++)
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
    int *return_array;
    return_array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        return_array[i] = arr[i];
    return return_array;
}