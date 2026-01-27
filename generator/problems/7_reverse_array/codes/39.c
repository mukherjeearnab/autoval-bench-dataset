/* Student 9 */
#include <stdio.h>



int* solve_student(int* arr, int n) {
    int temp; 
    for (int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i];
        arr[n-i] = temp;
    }
    return arr;
}