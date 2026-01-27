int* solve_student(int* arr, int n) { // Student 7: Correct, more verbose
  int start_index = 0;
  int end_index = n - 1;
  while (start_index < end_index) {
    int temp_value = arr[start_index];
    arr[start_index] = arr[end_index];
    arr[end_index] = temp_value;
    start_index++;
    end_index--;
  }
  return arr;
}