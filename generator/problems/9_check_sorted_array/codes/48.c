int solve_student(int* arr, int n) {
  int isSorted = 1;
  for(int i = 0; i < n; i++){
    if (arr[i] < arr[i-1]){
      isSorted = 0;
    }
  }
  return isSorted;
}