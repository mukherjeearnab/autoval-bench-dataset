int solve_student(int* arr, int n) {
  int positive_count = 0;
  int i = 0;
  while (i < n) {
    if (arr[i] > 0) {
      positive_count++;
    }
    i++;
  }
  return positive_count;
}