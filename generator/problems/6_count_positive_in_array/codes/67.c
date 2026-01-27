int solve_student(int* arr, int n) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] > 0)
      cnt++;
  }
  return cnt;
}