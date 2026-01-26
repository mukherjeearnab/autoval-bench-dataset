int solve_student(int *arr, int n) {
  int hash[n];
  for (int i = 0; i < n; i++) {
    hash[i] = -1;
  }
  for (int i = 0; i < n; i++) {
    int index = arr[i] % n;
    if (index < 0) {
      index += n;
    }
    if (hash[index] != -1) {
      return 1;
    } else {
      hash[index] = arr[i];
    }
  }
  return 0;
}