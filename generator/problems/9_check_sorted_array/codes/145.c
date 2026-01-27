int solve_student(int* arr, int n) {
  if (n <= 0) return 1;
  for (int i = 0; i < n; ++i) {
    if (arr[i] > arr[i + 1]) {
      return 0;
    }
  }
  return 1;
}