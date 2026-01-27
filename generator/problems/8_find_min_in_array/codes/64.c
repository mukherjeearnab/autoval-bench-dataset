int solve_student(int* arr, int n) {
  int min_value = arr[0];
  for(int k = 0; k < n; k++){
    if(arr[k] < min_value){
      min_value = arr[k];
    }
  }
  return min_value;
}