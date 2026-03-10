int* solve_student(int* arr, int n) { 
  int i, j;
  for(i = 0; i < n - 1; i++){
    for(j = i + 1; j < n; j++){
      if(arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
}