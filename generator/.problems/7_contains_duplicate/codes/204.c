int solve_student(int *arr, int n) {
  int i = 0;
  while (i < n) {
    if (arr[0] == arr[i]){
      return 1;
    }
    i++;
  }
  return 0;
}