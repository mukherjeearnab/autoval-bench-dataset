int solve_student(char *arr, int len) {
  int maxlen = 0;
  int currentlen = 0;
  int start = 0;
  int seen[256] = {0};
  for (int i = 0; i < len; i++) {
    if (seen[arr[i]]) {
      while (arr[start] != arr[i]) {
        seen[arr[start]] = 0;
        start++;
      }
      start++;
    } else {
      seen[arr[i]] = 1;
      currentlen = i - start + 1;
      if (currentlen > maxlen) {
        maxlen = currentlen;
      }
    }
  }
  return maxlen;
}