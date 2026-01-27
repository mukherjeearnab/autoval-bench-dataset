int solve_student(int* arr, int n) {
  if (n <= 0) return 1;
  for (int i = 1; i < n; ++i) {
    if (arr[i - 1] > arr[i]) {
      return 0;
    }
  }
  return 1;
}