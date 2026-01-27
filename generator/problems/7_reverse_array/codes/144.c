int* solve_student(int* arr, int n) { // Student 4: Incorrect, off-by-one error
  for (int i = 0; i <= n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - i];
    arr[n - i] = temp;
  }
  return arr;
}