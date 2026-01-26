void solve_student(int *arr, int n) {
  int i, j, t;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
      }
    }
  }
}