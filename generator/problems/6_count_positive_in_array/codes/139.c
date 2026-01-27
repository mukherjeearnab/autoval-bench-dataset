int solve_student(int* arr, int n) {
  int pos_count = 0;
  int i = 0;
  while (i < n) {
    if (arr[i] >= 0) {
        pos_count++;
    }
    i++;
  }
  return pos_count;
}