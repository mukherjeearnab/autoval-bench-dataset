int solve_student(char *arr, int len) {
  int max_len = 0;
  int i = 0;
  int j = 0;
  while (i < len) {
    if (arr[i] == arr[j]) {
      j++;
    }
    if (j - i > max_len) {
      max_len = j - i;
    }
    i++;
  }
  return max_len;
}