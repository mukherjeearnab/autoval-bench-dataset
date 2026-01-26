int solve_student(char *arr, int len) {
  int maxlen = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      int seen[256] = {0};
      int valid = 1;
      for (int k = i; k <= j; k++) {
        if (seen[arr[k]]) {
          valid = 0;
          break;
        }
        seen[arr[k]] = 1;
      }
      if (valid) {
        int current_len = j - i + 1;
        if (current_len > maxlen) {
          maxlen = current_len;
        }
      }
    }
  }
  return maxlen;
}