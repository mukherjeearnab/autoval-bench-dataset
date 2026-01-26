int solve_student(char *arr, int len) {
  int max_len = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      int count = 0;
      int freq[256] = {0};
      int valid = 1;
      for (int k = i; k <= j; k++) {
        if (freq[arr[k]] > 0) {
          valid = 0;
          break;
        }
        freq[arr[k]]++;
        count++;
      }
      if (valid) {
        if (count > max_len) {
          max_len = count;
        }
      }
    }
  }
  return max_len;
}