int solve_student(char *arr, int len) {
  int max_len = 0;
  int start = 0;
  int end = 0;
  int char_index[256] = {0};
  while (end < len) {
    if (char_index[arr[end]] != 0) {
      start = (char_index[arr[end]] > start) ? char_index[arr[end]] : start;
    }
    char_index[arr[end]] = end + 1;
    max_len = (max_len > end - start + 1) ? max_len : end - start + 1;
    end++;
  }
  return max_len;
}