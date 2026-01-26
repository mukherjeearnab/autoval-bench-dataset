int solve_student(char *arr, int len) {
  int max_len = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      int count = 0;
      int seen[256] = {0};
      for (int k = i; k <= j; k++) {
        if (seen[arr[k]]) {
          count = 0; 
          break;
        }
        seen[arr[k]] = 1;
        count++;
      }
      if (count > max_len) {
        max_len = count;
      }
    }
  }
  return max_len;
}