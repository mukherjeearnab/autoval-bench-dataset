int solve_student(int *arr, int n) {
  int hash[n];
  for (int i = 0; i < n; i++) {
    hash[i] = -1;
  }
  for (int i = 0; i < n; i++) {
    int val = arr[i];
    for (int j = 0; j < i; j++) {
      if (arr[j] == val) {
        return 1;
      }
    }
  }
  return 0;
}