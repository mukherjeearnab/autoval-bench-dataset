int* solve_student(int* arr, int n) { // Student 2: Correct, using a helper function
  void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

  for (int i = 0; i < n / 2; i++) {
    swap(&arr[i], &arr[n - 1 - i]);
  }
  return arr;
}