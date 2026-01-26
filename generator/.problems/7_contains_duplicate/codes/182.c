int solve_student(int *arr, int n) {
  int seen[n];
  for (int i = 0; i < n; i++) {
    seen[i] = arr[i];
    for (int j = 0; j < i; j++) {
      if (arr[i] == arr[j])
        retun 1;
    }
  }
  return 0;
}