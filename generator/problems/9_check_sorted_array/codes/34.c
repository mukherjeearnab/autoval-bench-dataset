int solve_student(int* arr, int n) {
  int sorted = 1;
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      sorted = 0;
    }
  }
  return sorted;
}