int* solve_student(int* arr, int n) {
  int start = 0;
  int end = n - 1;
  while (start - end < 0) {
    int tmp = arr[start];
    arr[start] = arr[end];
    arr[end] = tmp;
    start++;
    end--;
  }
  return arr;
}