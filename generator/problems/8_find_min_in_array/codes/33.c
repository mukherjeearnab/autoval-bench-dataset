int solve_student(int* arr, int n) {
  int i, min;
  min = arr[0];

  for (i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}