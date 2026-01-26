int solve_student(char *arr, int len) {
  int max_len = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      int current_len = j - i + 1;
      int has_duplicates = 0;
      for (int k = i; k < j; k++) {
        if (arr[k] == arr[j]) {
          has_duplicates = 1;
          break;
        }
      }
      if (!has_duplicates) {
        if (current_len > max_len) {
          max_len = current_len;
        }
      }
    }
  }
  return max_len;
}