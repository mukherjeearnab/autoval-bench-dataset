int* solve_student(int* arr, int n) { // Student 6: Incorrect, missing header, compilation error
  for (int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
  return arr;
}