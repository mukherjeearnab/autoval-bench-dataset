int solve_student(int* arr, int n) {
  int is_sorted = 1;
  for (int i = 0; i < n; i++) {
    if (i > 0 && arr[i] < arr[i - 1]) {
      is_sorted = 0;
      break;
    }
  }
  return is_sorted;
}