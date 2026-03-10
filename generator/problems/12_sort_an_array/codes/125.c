int* solve_student(int* arr, int n) {
  
  if (n <= 1) return arr;

  int pivot = arr[0];
  int i = 0;
  int j = n - 1;

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

  solve_student(arr, j + 1);
  solve_student(arr + i, n - i);

  return arr;
}