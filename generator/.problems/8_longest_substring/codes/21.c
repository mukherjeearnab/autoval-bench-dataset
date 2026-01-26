int solve_student(char *arr, int len) {
  int n = len;
  int longest = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int count = 0;
      for (int k = i; k <= j; k++) {
        int seen = 0;
        for (int l = i; l < k; l++) {
          if (arr[l] == arr[k]) {
            seen = 1;
            break;
          }
        }
        if (!seen) {
          count++;
        }
      }
      if (count > longest) {
        longest = count;
      }
    }
  }
  return longest;
}