int solve_student(int* arr, int n) {
  int result = 1;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      result = 0;
      break;
    }
  }
  return result;
}