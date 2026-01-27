#include <stdio.h>



int solve_student(int* arr, int n) { int minimum = arr[0]; for(int i = 1; i < n; i++){ if(arr[i] < minimum) minimum = arr[i]; } return minimum; }