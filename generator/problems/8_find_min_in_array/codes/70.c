int solve_student(int* arr, int n) {
  int minimum = arr[0];
  for (int i = 1; i < n; i++) {
    minimum = arr[i];
  }
  return minimum;
}