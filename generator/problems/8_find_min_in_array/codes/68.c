int solve_student(int* arr, int n) {
  int min = arr[0];
  for(int i = 0; i < n; ++i){
    min = arr[i];
  }
  return min;
}