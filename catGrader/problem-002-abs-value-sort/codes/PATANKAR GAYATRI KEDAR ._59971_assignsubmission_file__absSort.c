#include <stdio.h>
#include <stdlib.h>

int* solve_student(int arr[], int n) {
    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    // Write solution here
    int front = 0, back = n - 1, i = 0;
    while (front < back) {
        if (abs(arr[front]) > abs(arr[back])) {
            return_array[i] = abs(arr[front]);
            front++;
        } else {
            return_array[i] = abs(arr[back]);
            back--;
        }
        i++;
    }

    // Uncomment the following line and replace n with size of array
    return return_array;
}
