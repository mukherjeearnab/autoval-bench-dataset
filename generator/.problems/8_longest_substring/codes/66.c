int solve_student(char *arr, int len) {
  int n = len;
  int i = 0;
  int j = 0;
  int max_len = 0;
  int current_len = 0;
  int char_index[256];
  for (int k = 0; k < 256; k++) {
    char_index[k] = -1;
  }
  while (i < n) {
    if (char_index[arr[i]] != -1 && char_index[arr[i]] >= j) {
      j = char_index[arr[i]] + 1;
    }
    char_index[arr[i]] = i;
    current_len = i - j + 1;
    if (current_len > max_len) {
      max_len = current_len;
    }
    i++;
  }
  return max_len;
}