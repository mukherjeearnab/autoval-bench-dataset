#include <stdio.h>
#include <stdlib.h>

void MergeSort(int* arr, int i, int j) {
    if (i >= j)
        return;

    int mid = (i + j) / 2;
    MergeSort(arr, i, mid);
    MergeSort(arr, mid + 1, j);

    int temp[j - i + 1];

    for (int p1 = i, p2 = mid + 1, tog = 0; p1 <= mid || p2 <= j; tog++) {
        if (p1 == mid + 1) {
            temp[tog] = arr[p2];
            p2++;
        } else if (p2 == j + 1) {
            temp[tog] = arr[p1];
            p1++;
        } else {
            if (arr[p1] <= arr[p2]) {
                temp[tog] = arr[p1];
                p1++;
            } else {
                temp[tog] = arr[p2];
                p2++;
            }
        }
    }

    for (int p = i, tog = 0; p <= j; p++, tog++) {
        arr[p] = temp[tog];
    }
}

int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }
    MergeSort(return_array, 0, n - 1);
    return return_array;
}
