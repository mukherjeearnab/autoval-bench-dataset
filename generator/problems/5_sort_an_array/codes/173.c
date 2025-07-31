void solve_student(int *arr, int n) {
  int i, j;
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      if(arr[j] > arr[j+1])
        {
          int tmp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = tmp;
        }
}