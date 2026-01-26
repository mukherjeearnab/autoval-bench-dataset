int solve_student(char *arr, int len) {
  int start = 0;
  int end = 0;
  int max_len = 0;
  int char_index[256];
  for (int i = 0; i < 256; i++) {
    char_index[i] = -1;
  }
  while (end < len) {
    if (char_index[arr[end]] != -1 && char_index[arr[end]] >= start) {
      start = char_index[arr[end]] + 1;
    }
    char_index[arr[end]] = end;
    max_len = (max_len > (end - start + 1)) ? max_len : (end - start + 1);
    end++;
  }
  return max_len;
}