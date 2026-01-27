#include <stddef.h>



int* solve_student(int* arr, int n) {
  int l = 0;
  int r = n - 1;
  while (l < r) {
    int tmp = arr[l];
    arr[l] = arr[r];
    arr[r] = tmp;
    l++;
    r--;
  }
  return arr;
}