int solve_student(int *arr, int n) {
  int hash[100001] = {0};
  for (int i = 0; i < n; i++) {
    int key = arr[i] + 100000;
    if (hash[key]) {
      return 1;
    }
    hash[key] = 1;
  }
  return 0;
}