int* solve_student(int* arr, int n) { 
  if (n <= 1) return arr;
  int mid = n / 2;
  int* left = (int*)malloc(mid * sizeof(int));
  int* right = (int*)malloc((n - mid) * sizeof(int));
  for (int i = 0; i < mid; i++) left[i] = arr[i];
  for (int i = mid; i < n; i++) right[i - mid] = arr[i];
  solve_student(left, mid);
  solve_student(right, n - mid);
  int i = 0, j = 0, k = 0;
  while (i < mid && j < n - mid) {
    if (left[i] <= right[j]) {
      arr[k++] = left[i++];
    } else {
      arr[k++] = right[j++];
    }
  }
  while (i < mid) arr[k++] = left[i++];
  while (j < n - mid) arr[k++] = right[j++];
  return arr;
}