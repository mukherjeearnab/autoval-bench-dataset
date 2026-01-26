int solve_student(int *arr, int n) {
  int hash[n];
  for (int i = 0; i < n; i++) {
    hash[i] = -1;
  }
  for (int i = 0; i < n; i++) {
    int key = arr[i] % n;
    if (arr[i] < 0) {
      key += n;
    }
    if (hash[key] != -1) {
      return 1;
    } else {
      hash[key] = arr[i];
    }
  }
  return 0;
}