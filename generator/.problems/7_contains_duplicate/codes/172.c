int solve_student(int *arr, int n) {
  int seen[n];
  for (int i = 0; i < n; i++) {
    seen[i] = arr[i];
    if (seen[i] == arr[i+1])
      return 1;
  }
  return 0;
}