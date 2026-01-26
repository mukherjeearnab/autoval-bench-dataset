int solve_student(int *arr, int n) {
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    if (arr[i] = arr[j] && i != j)
    return 1;
    return 0;
}