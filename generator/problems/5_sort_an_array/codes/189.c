void solve_student(int *arr, int n) {
  for (int i = 0; i < n; i++)
    for (int j = 1; j < n-i; j++)
      if (arr[j] < arr[j-1])
        temp = arr[j], arr[j] = arr[j-1], arr[j-1] = temp;
}