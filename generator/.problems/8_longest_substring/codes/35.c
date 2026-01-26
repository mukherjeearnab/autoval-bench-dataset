int solve_student(char *arr, int len) {
  int max_len = 0;
  int current_len = 0;
  int seen[256] = {0};
  for (int i = 0; i < len; i++) {
    if (seen[arr[i]]) {
      current_len = 0;
      for (int j = 0; j < 256; j++) {
        seen[j] = 0;
      }
    }
    seen[arr[i]] = 1;
    current_len++;
    if (current_len > max_len) {
      max_len = current_len;
    }
  }
  return max_len;
}