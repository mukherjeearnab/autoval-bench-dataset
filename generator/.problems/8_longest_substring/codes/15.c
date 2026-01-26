int solve_student(char *arr, int len) {
  int i, j, maxLen = 0;
  for (i = 0; i < len; i++) {
    for (j = i; j < len; j++) {
      int seen[256] = {0};
      int unique = 1;
      for (int k = i; k <= j; k++) {
        if (seen[arr[k]]) {
          unique = 0;
          break;
        }
        seen[arr[k]] = 1;
      }
      if (unique) {
        maxLen = (j - i + 1) > maxLen ? (j - i + 1) : maxLen;
      }
    }
  }
  return maxLen;
}