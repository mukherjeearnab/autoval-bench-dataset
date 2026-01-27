int* solve_student(int* arr, int n) {
  int temp;
  for (int i = 1; i < n; i++) {
    temp = arr[i];
    arr[i] = arr[i-1];
    arr[i-1] = temp;
  }
  return arr;
}