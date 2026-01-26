int solve_student(int *arr, int n) {
  int freq[200001];
  for (int i = 0; i < 200001; i++){
    freq[i] = 0;
  }
  for(int i = 0; i < n; i++){
    freq[arr[i] + 100000]++;
    if(freq[arr[i] + 100000] > 1){
      return 1;
    }
  }
  return 0;
}