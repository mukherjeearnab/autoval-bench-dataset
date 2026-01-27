int* solve_student(int* arr, int n) { // Student 10: Incorrect - infinite loop if n < 2
  int i = 0;
  while (1) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
    i++;
    if (i > n/2) break; //attempted fix, but still has issues
  }
  return arr;
}