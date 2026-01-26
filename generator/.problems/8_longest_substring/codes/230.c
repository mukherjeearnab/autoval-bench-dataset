int solve_student(char *arr, int len) {
  int max_len = 0;
  int i = 0;
  while (i < len) {
    int j = i;
    while (j < len) {
      if (arr[i] == arr[j]) {
        max_len++;
      }
      j++;
    }
    i++;
  }
  return max_len;
}