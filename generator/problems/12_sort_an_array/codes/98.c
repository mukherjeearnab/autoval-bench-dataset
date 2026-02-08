int* solve_student(int* arr, int n) { // Student 8: Incorrect - Off by one error
  int i, j, temp;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      if (arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  return arr;
}