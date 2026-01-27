int solve_student(int* arr, int n) {
  bool is_sorted = true;
  for (int i = 0; i < n - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      is_sorted = false;
      break;
    }
  }
  return is_sorted;
}