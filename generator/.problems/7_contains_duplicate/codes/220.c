int solve_student(int *arr, int n) {
  int i, j, flag = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i != j && arr[i] == arr[j]) {
        flag = 1;
        break;
      }
    }
  }
  return flag;
}