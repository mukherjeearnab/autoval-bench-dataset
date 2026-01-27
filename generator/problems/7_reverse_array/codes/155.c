int* solve_student(int* arr, int n) { // Student 5: Incorrect - off-by-one error
  int i;
  for (i = 0; i <= n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
  return arr;
}