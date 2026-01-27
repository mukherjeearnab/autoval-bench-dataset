int* solve_student(int* arr, int n) {
  int left = 0;
  int right = n - 1;
  while (left < right) {
    int tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;
    left++;
    right--;
  }
  return arr;
}