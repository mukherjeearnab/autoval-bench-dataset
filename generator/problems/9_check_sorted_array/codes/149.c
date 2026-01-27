int solve_student(int* arr, int n) {
  int i = 1;
  while(i < n){
      if(arr[i] < arr[i-1]){
          return 0;
      }
      i++;
  }
  return 1;
}