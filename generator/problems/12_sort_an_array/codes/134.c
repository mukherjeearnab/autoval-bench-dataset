int* solve_student(int* arr, int n) { // Student 4: QuickSort
  if (n <= 1) return arr;
  int pivot = arr[0];
  int i = 0, j = n - 1;
  while (i <= j) {
    while (arr[i] < pivot) i++;
    while (arr[j] > pivot) j--;
    if (i <= j) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
  }
  solve_student(arr, j + 1); //left part
  solve_student(arr + i, n - i); // right part
  return arr;
}