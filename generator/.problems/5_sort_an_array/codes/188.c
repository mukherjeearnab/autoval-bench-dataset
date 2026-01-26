void solve_student(int *arr, int n) {
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (arr[i] > arr[j])
        arr[i], arr[j] = arr[j], arr[i];
}