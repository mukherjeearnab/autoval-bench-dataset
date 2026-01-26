int solve_student(char *arr, int len) {
  int n = len;
  int maxLen = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int count = 0;
      for (int k = i; k <= j; k++) {
        int found = 0;
        for (int l = i; l < k; l++) {
          if (arr[l] == arr[k]) {
            found = 1;
            break;
          }
        }
        if (!found) {
          count++;
        }
      }
      if (count > maxLen) {
        maxLen = count;
      }
    }
  }
  return maxLen;
}