int* solve_student(int* arr, int n) { // Student 7: Correct, clear variable names
  int left = 0;
  int right = n - 1;

  while (left < right) {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
  }
  return arr;
}