#include <stdio.h>
#include <stdlib.h>

int* solve_student(int arr[], int n)

{
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos = i;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] *= -1;
        }
    }

    int* return_array;
    return_array = (int*)malloc(n * sizeof(int));

    int neg = pos;
    for (int i = 0; i < n; i++) {
        if (pos < n && neg >= 0 && arr[pos] < arr[neg]) {
            return_array[i] = arr[pos];
            pos++;
        } else if (neg >= 0) {
            return_array[i] = arr[neg];
            neg--;
        } else if (pos < n) {
            return_array[i] = arr[pos];
            pos++;
        }
    }

    return return_array;
}

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int* ans = solve_student(arr, n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", ans[i]);
//     }
//     printf("\n");
// }