int* solve_student(int* arr, int n) { // Student 3:  Slightly messy, different variable names
  int i, j, temp;
  for (i = 0, j = n - 1; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return arr;
}