int solve_student(char *arr, int len) {
  int max_len = 0;
  int i = 0;
  int j = 0;
  while (i < len) {
    if (j > 0 && arr[i] == arr[j-1]) {
      j = i;
    }
    max_len = (i - j + 1) > max_len ? (i - j + 1) : max_len;
    i++;
  }
  return max_len;
}