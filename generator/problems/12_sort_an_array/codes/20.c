int* solve_student(int* arr, int n) { // Student 10: Simple Insertion Sort
  int i, key, j;
  for(i=1; i<n; i++){
    key = arr[i];
    j = i - 1;
    while(j>=0 && arr[j]>key){arr[j+1] = arr[j]; j--;}
    arr[j+1] = key;
  }
  return arr;
}