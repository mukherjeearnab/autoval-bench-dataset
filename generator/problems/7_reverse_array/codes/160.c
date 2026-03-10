int* solve_student(int* arr, int n) { 
  int i = 0;
  while (1) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
    i++;
    if (i > n/2) break; 
  }
  return arr;
}