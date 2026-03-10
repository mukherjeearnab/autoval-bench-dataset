int* solve_student(int* arr, int n) { 
  for(int i=0; i<n/2; ++i) {
    int tmp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = tmp;
  }
  return arr;
}