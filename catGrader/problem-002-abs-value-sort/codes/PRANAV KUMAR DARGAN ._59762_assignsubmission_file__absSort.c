#include <stdio.h>
#include <stdlib.h>
int* solve_student(int arr[], int n) {
    int* return_array;
    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    // Write solution here

    int* ptr_neg;
    int* ptr_pos;
    ptr_neg = arr;
    ptr_pos = arr;
    int neg = 0;
    int pos = 0;
    while (*ptr_pos < 0) {
        ptr_pos++;
        neg++;
    }
    int ctr = 0;
    pos = n - neg;
    for (int i = 0; i < n; i++) {
        if (-(*ptr_neg) < *ptr_pos && neg > 0) {
            *(return_array + i) = -(*ptr_neg);
            ptr_neg++;
            neg--;
            ctr++;
        } else if (pos > 0) {
            *(return_array + i) = *ptr_pos;
            ptr_pos++;
            pos--;
            ctr++;
        } else {
        }
    }
    while (pos > 0) {
        *(return_array + ctr) = *ptr_pos;
        ptr_pos++;
        pos--;
        ctr++;
    }
    while (neg > 0) {
        *(return_array + ctr) = -(*ptr_neg);
        ptr_neg++;
        neg--;
        ctr++;
    }

    return return_array;
}
// void display(int arr[], int n) {
//     printf("[");
//     for (int i = 0; i < n; i++) {
//         printf("%d,", arr[i]);
//     }
//     printf("]\n");
// }
// int main() {
//     int arr[6] = {-8, -5, -1, 0, 4, 9};
//     int* b;
//     b = solve_student(arr, 6);
//     display(b, 6);
// }