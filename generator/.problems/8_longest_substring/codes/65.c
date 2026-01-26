int solve_student(char *arr, int len) {
  int max_len = 0;
  for (int i = 0; i < len; i++) {
    int current_len = 0;
    int found[256] = {0};
    for (int j = i; j < len; j++) {
      if (found[arr[j]]) {
        break;
      }
      found[arr[j]] = 1;
      current_len++;
      if (current_len > max_len) {
        max_len = current_len;
      }
    }
  }
  return max_len;
}