int solve_student(char *arr, int len) {
  int max_len = 0;
  int start = 0;
  int end = 0;
  int seen[256] = {0};
  while (end < len) {
    if (seen[arr[end]] == 1) {
      start++;
    } else {
      seen[arr[end]] = 1;
      if (end - start + 1 > max_len) {
        max_len = end - start + 1;
      }
      end++;
    }
  }
  return max_len;
}