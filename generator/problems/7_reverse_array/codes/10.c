int* solve_student(int* arr, int n) { // Student 10: Incorrect - semantic bug
  int i, j;
  for (i = 0, j = n - 1; i < n; i++, j--) {
    arr[i] = arr[j];
  }
  return arr;
}