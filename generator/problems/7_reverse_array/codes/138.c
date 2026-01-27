int* solve_student(int* arr, int n) {
  int i, j, tmp;
  for (i = 0; i < n; i++) {
    j = n - i - 1;
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return arr;
}