int solve_student(int *arr, int n) {
  int seen[n];
  for (int i = 0; i < n; i++) {
    if (seen[arr[i]])
      return 1;
    seen[arr[i]] = 1;
  return 0;
}