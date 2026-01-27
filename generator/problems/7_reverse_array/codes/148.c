int* solve_student(int* arr, int n) { // Student 8: Incorrect, semantic error (doesn't reverse)
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i];
  }
  return arr;
}