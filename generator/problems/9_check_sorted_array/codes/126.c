int solve_student(int* arr, int n) {
  // Check if the array is sorted in non-decreasing order
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return 0;
    }
  }
  return 1;
}