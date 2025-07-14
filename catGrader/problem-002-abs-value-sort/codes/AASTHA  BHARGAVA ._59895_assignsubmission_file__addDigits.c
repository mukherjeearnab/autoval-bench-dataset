#include <stdio.h>
int* solve_student(int arr[], int n)

{
    // Write solution here

    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));
    int i = 0;
    int j = n - 1;
    int k = n - 1;
    for (; i <= j;) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
        if (arr[i] > arr[j]) {
            return_array[k] = arr[i];
            i++;
        } else {
            return_array[k] = arr[j];
            j--;
        }
        k--;
    }
    // Uncomment the following line and replace n with size of array

    // return_array = (int*)malloc(n*sizeof(int));

    return return_array;
}