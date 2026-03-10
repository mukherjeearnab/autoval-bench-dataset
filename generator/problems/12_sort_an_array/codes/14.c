int* solve_student(int* arr, int n) { 
  if (n < 2) return arr;
  int pivot = arr[0];
  int i = -1;
  for (int j = 1; j < n; j++) {
    if (arr[j] <= pivot) {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[i + 1];
  arr[i + 1] = arr[0];
  arr[0] = temp;

  solve_student(arr, i); 
  solve_student(arr + i + 1, n - i - 1);

  return arr;
}