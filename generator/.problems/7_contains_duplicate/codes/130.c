int solve_student(int *arr, int n) {
  int hash[100000];
  for (int i = 0; i < n; i++){
    int index = arr[i] + 100000;
    if(hash[index] == 1){
      return 1;
    }
    hash[index] = 1;
  }
  return 0;
}