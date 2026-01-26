int solve_student(char *arr, int len) {
  int max_len = 0;
  int start = 0;
  int i = 0;
  while (i < len) {
    int j = i + 1;
    while (j < len && arr[j] != arr[i]) {
      j++;
    }
    if (j == len) {
      max_len = len - start;
    } else {
      int current_len = j - i;
      if (current_len > max_len) {
        max_len = current_len;
      }
      start = j;
    }
    i++;
  }
  return max_len;
}