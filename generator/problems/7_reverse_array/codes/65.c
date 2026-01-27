int* solve_student(int* arr, int n) { //student 5
  int temp;
  for (int i = 1; i < n; i++) {
    temp = arr[i];
    arr[i] = arr[n - i];
    arr[n - i] = temp;
  }
  return arr;
}