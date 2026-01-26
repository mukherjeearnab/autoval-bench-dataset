int solve_student(int *arr, int n) {
  int seen[n];
  for (int i = 0; i < n; i++) {
    seen[i] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] = arr[j])
        return 1;
    }
  }
  return 0;
}