int solve_student(int* arr, int n) {
  int i = 0;
  while (i < n - 1) {
      if (arr[i] > arr[i + 1]) {
          return 0;
      }
      i++;
  }
  return 1;
}