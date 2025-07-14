#include <math.h>
#include <stdio.h>

int isAbs(int n) {
    if (n >= 0) {
        return n;
    } else {
        return -1 * n;
    }
}

int* solve_student(int arr[], int n) {
    // Write solution here

    for (int i = 0; i < n; i++) {
        int index = 0;
        for (int j = 0; j < n; j++) {
            if (isAbs(arr[index]) > isAbs(arr[j])) {
                int temp = arr[index];
                arr[index] = arr[j];
                arr[j] = temp;
                index++;
            }
            arr[i] = isAbs(arr[i]);
        }
    }

    return arr;
}

// int main() {
//     int arr[] = {-8, -5, -1, 0, 4, 9};
//     int n = 6;
//     solve_student(arr, 6);

//     for (int i = 0; i < n; i++) {
//         printf("%d", arr[i]);
//     }

//     return 0;
// }