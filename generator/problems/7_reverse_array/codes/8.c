int* solve_student(int* arr, int n) { // Student 8: Incorrect - missing return
  int i, temp;
  for (i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
  // Missing return statement
}