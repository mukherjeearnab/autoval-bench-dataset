int solve_student(int *arr, int n) {
  if (n <= 1) return 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i != j && arr[i] == arr[j]) {
        return 1;
      }
    }
  }
  return 0;
}