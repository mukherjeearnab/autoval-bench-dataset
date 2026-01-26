int solve_student(int *arr, int n) {
  int hash[100001] = {0};
  for (int i = 0; i < n; i++) {
    int val = arr[i] + 100000;
    if (hash[val] == 1) {
      return 1;
    }
    hash[val] = 1;
  }
  return 0;
}