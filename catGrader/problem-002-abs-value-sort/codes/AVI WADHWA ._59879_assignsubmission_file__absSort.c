#include <stdio.h>
#include <stdlib.h>
int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int sum = 0;

    int temp[100001];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[-1 * arr[i]]++;
        } else {
            temp[arr[i]]++;
        }
    }
    int pt = 0;
    for (int i = 0; i <= 10000; i++) {
        while (temp[i]--) {
            return_array[pt++] = i;
        }
    }

    return return_array;
}