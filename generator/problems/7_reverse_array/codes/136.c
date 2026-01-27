#include <stdlib.h>



int* solve_student(int* arr, int n) {
    if (n <= 1) return arr;
    int i = 0;
    int j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return arr;
}