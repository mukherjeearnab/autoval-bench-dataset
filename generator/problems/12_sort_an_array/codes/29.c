int* solve_student(int* arr, int n) { //student 9 - Incorrect
   for (int i = 0; i < n; i++) {
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]){
      }
    }
    return arr;
  }