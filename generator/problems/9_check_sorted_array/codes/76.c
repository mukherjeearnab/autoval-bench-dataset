#include <stdbool.h>



int solve_student(int* arr, int n) {  bool sorted = true;  for (int i = 0; i < n - 1; i++) {    if (arr[i] > arr[i + 1]) {      sorted = false;    }  }  return sorted;}