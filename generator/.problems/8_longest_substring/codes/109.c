int solve_student(char *arr, int len) {
  int max_len = 0;
  for (int i = 0; i < len; i++) {
    int j = i;
    int seen[256] = {0};
    int current_len = 0;
    while (j < len) {
      if (seen[arr[j]]) {
        break;
      }
      seen[arr[j]] = 1;
      current_len++;
      j++;
    }
    if (current_len > max_len) {
      max_len = current_len;
    }
  }
  return max_len;
}