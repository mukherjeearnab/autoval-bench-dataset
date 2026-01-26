int solve_student(int *arr, int n) {
  int hash[100001] = {0};
  for(int i = 0; i < n; i++){
    int index = abs(arr[i]);
    if(hash[index] == 1){
      return 1;
    }
    hash[index] = 1;
  }
  return 0;
}