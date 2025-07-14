#include <stdio.h>

int arr[5] = {-2, -1, 0, 1, 2};

int* solve_student(int arr[], int n) {
    // Write solution here

    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    return_array = arr;
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            arr[i] = arr[i] * -1;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return return_array;
}

// int main() {
//     int* ans;
//     ans = solve_student(arr, 5);
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", ans[i]);
//     }
//     return 0;
// }