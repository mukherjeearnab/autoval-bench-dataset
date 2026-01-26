int solve_student(int *arr, int n) {
  if (n <= 1) {
    return 0;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        return 1;
      }
    }
  }
  return 0;
}