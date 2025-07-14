#include <stdlib.h>
int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));

    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (abs(arr[i]) < abs(arr[j])) {
            return_array = arr[j];
            j--;
        } else {
            return_array = arr[i];
            i++;
        }
    }
    return return_array;
}