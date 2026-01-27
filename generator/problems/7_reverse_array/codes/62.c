int* solve_student(int* arr, int n) { //student 2
  for (int i = 0; i < n / 2; i++) {
    int tmp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = tmp;
  }
  return arr;
}