int* solve_student(int* arr, int n) { 
  int i, j, temp;
  i = 0; j = 0;
  while(i < n) {
    if (arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    i++;
  }
  return arr;
}