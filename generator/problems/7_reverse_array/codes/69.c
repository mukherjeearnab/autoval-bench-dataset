int* solve_student(int* arr, int n) { //student 9 - incorrect
  int i, temp;
  for (i = 0; i <= n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  return arr;
}