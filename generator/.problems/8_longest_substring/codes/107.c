int solve_student(char *arr, int len) {
  int maxLen = 0;
  for (int i = 0; i < len; i++) {
    int seen[256] = {0};
    int currentLen = 0;
    for (int j = i; j < len; j++) {
      if (seen[arr[j]]) {
        break;
      }
      seen[arr[j]] = 1;
      currentLen++;
    }
    maxLen = (maxLen > currentLen) ? maxLen : currentLen;
  }
  return maxLen;
}