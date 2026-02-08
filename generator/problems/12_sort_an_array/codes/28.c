int* solve_student(int* arr, int n) { //student 8 - Incorrect
  int i, j, temp;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
}