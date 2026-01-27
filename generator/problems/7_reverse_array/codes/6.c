int* solve_student(int* arr, int n) { // Student 6: Incorrect - off by one error
  int i, j, temp;
  for (i = 0, j = n; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return arr;
}