int solve_student(int *arr, int n) {
  int hash[100000];
  for (int i = 0; i < n; i++) {
    if (hash[arr[i]] != 0)
      return 1;
    else
      hash[arr[i]] = 1;
  }
  return 0;
}