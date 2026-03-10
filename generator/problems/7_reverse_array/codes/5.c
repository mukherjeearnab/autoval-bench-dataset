int* solve_student(int* arr, int n) { 
  int start_index = 0;
  int end_index = n - 1;
  while (start_index < end_index) {
    int tmp = arr[start_index];
    arr[start_index] = arr[end_index];
    arr[end_index] = tmp;
    start_index++;
    end_index--;
  }
  return arr;
}