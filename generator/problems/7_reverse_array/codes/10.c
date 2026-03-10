int* solve_student(int* arr, int n) { 
  int i, j;
  for (i = 0, j = n - 1; i < n; i++, j--) {
    arr[i] = arr[j];
  }
  return arr;
}