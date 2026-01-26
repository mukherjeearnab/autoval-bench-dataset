int solve_student(int *arr, int n) {
  int seen[100001] = {0};
  for (int i = 0; i < n; i++) {
    if (seen[arr[i] + 100000]) {
      return 1;
    }
    seen[arr[i] + 100000] = 1;
  }
  return 0;
}