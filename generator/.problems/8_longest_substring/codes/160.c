int solve_student(char *arr, int len) {
  int max_len = 0;
  int i = 0;
  int j = 0;
  int seen[256] = {0};
  while (i < len) {
    if (seen[arr[i]] == 0) {
      seen[arr[i]] = 1;
      if (i - j + 1 > max_len) {
        max_len = i - j + 1;
      }
      i++;
    } else {
      seen[arr[j]] = 0;
      j++;
    }
  }
  return max_len;
}