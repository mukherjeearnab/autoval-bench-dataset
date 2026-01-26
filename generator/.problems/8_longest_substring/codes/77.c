int solve_student(char *arr, int len) {
  int max_len = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      int duplicate = 0;
      for (int k = i; k <= j; k++) {
        for (int l = k + 1; l <= j; l++) {
          if (arr[k] == arr[l]) {
            duplicate = 1;
            break;
          }
        }
        if (duplicate) break;
      }
      if (!duplicate) {
        max_len = (j - i + 1) > max_len ? (j - i + 1) : max_len;
      }
    }
  }
  return max_len;
}