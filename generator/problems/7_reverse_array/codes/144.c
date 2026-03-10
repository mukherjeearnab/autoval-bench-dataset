int* solve_student(int* arr, int n) { 
  for (int i = 0; i <= n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - i];
    arr[n - i] = temp;
  }
  return arr;
}