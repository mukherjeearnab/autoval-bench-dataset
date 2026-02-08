int* solve_student(int* arr, int n) { // Student 5: Merge Sort
  if (n <= 1) return arr;
  int mid = n / 2;
  int* left = arr;
  int* right = arr + mid;

  solve_student(left, mid);
  solve_student(right, n - mid);

  int* temp = (int*)malloc(n * sizeof(int));
  int i = 0, j = 0, k = 0;
  while (i < mid && j < n - mid) {
    if (arr[i] <= arr[mid + j]) {
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[mid + j++];
    }
  }
  while (i < mid) temp[k++] = arr[i++];
  while (j < n - mid) temp[k++] = arr[mid + j++];

  for (i = 0; i < n; i++) arr[i] = temp[i];
  free(temp);
  return arr;
}