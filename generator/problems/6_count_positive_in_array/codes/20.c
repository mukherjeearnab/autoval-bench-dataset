int solve_student(int* arr, int n) {
  int pos_cnt = 0;
  int i = 0;
  while (i < n) {
    if (arr[i] > 0)
      pos_cnt++;
    i++;
  }
  return pos_cnt;
}