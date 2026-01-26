int solve_student(int *arr, int n) {
  int seen[100000] = {0};
  for (int i = 0; i < n; i++) {
    if (seen[arr[i] + 10000]) {
      return 1;
    }
    seen[arr[i] + 10000] = 1;
  }
  return 0;
}