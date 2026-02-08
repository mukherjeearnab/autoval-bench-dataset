int* solve_student(int* arr, int n) {
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
  
  for (int i = 0; i < n - 1; i++){
      for(int j = 0; j < n - i - 1; j++){
          if(arr[j] > arr[j+1]){
              int t = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = t;
          }
      }
  }
  return arr;
}