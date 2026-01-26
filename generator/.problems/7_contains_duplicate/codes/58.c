int solve_student(int *arr, int n) {
  int hash[n];
  for(int i = 0; i < n; i++){
    hash[i] = -1;
  }
  for(int i = 0; i < n; i++){
    if(hash[arr[i]] != -1){
      return 1;
    }
    hash[arr[i]] = 1;
  }
  return 0;
}