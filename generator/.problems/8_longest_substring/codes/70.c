int solve_student(char *arr, int len) {
  if (len == 0) return 0;
  int max_len = 1;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      int flag = 1;
      for (int k = i; k < j; k++) {
        if (arr[k] == arr[j]) {
          flag = 0;
          break;
        }
      }
      if (flag) {
        int current_len = j - i + 1;
        if (current_len > max_len) {
          max_len = current_len;
        }
      }
    }
  }
  return max_len;
}