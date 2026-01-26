int solve_student(char *arr, int len) {
  int i, j, max_len = 0;
  for (i = 0; i < len; i++) {
    for (j = i; j < len; j++) {
      int hash[256] = {0};
      int duplicate = 0;
      for (int k = i; k <= j; k++) {
        if (hash[arr[k]]) {
          duplicate = 1;
          break;
        }
        hash[arr[k]] = 1;
      }
      if (!duplicate) {
        if (j - i + 1 > max_len) {
          max_len = j - i + 1;
        }
      }
    }
  }
  return max_len;
}