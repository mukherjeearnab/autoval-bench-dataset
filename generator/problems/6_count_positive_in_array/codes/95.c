#include <stdio.h>



int solve_student(int arr[], int n) {
    int pos_cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            pos_cnt++;
        }
    }
    return pos_cnt;
}