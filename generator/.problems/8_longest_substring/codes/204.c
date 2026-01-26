int solve_student(char *arr, int len) {
  int max_len = 1;
  if (len == 0) return 0;
  for (int i = 0; i < len; i++) {
    int current_len = 1;
    int seen[256] = {0};
    seen[arr[i]] = 1;
    for (int j = i + 1; j < len; j++) {
      if (seen[arr[j]] == 0) {
        current_len++;
        seen[arr[j]] = 1;
      } else {
        break;
      }
    }
    if (current_len > max_len) {
      max_len = current_len;
    }
  }
  return max_len;
}