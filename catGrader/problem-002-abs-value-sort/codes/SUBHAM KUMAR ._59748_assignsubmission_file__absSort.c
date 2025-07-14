#include <math.h>
#include <stdio.h>
int* solve_student(int arr[], int n) {
    // Write solution here
    int* return_array;

    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        return_array[i] = abs(arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (return_array[i] > return_array[j]) {
                temp = return_array[i];
                return_array[i] = return_array[j];
                return_array[j] = temp;
            }
        }
    }
    return return_array;
}
// int main() {
//     int arr[6] = {-8, -5, -1, 0, 4, 9};
//     int* return_array = solve_student(arr, 6);
//     for (int i = 0; i < 6; i++)
//         printf("%d", return_array[i]);
// }