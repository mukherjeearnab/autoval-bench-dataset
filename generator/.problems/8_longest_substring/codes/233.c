int solve_student(char *arr, int len) {
  int max_len = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      int count = 0;
      for (int k = i; k <= j; k++) {
        count++;
      }
      bool duplicate = false;
      for (int m = i; m < j; m++) {
        for (int n = m + 1; n <= j; n++) {
          if (arr[m] == arr[n]) {
            duplicate = true;
            break;
          }
        }
        if (duplicate) break;
      }
      if (!duplicate && count > max_len) {
        max_len = count;
      }
    }
  }
  return max_len;
}