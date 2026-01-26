int solve_student(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j && arr[i] == arr[j]) {
        return 1;
      }
    }
  }
  return 0;
}