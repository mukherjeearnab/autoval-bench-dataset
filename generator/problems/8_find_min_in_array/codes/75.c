int solve_student(int* arr, int n) {
  int min = arr[0];
  int j = 1;
  while(j < n){
    if(arr[j] < min){
      min = arr[j];
    }
    j++;
  }
  return min;
}