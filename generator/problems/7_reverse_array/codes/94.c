#include <stdio.h>



int* solve_student(int* arr, int n) {
  int i;
  for (i = 0; i < n; i++) {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  return arr;
}