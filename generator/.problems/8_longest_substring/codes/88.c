int solve_student(char *arr, int len) {
  int i, j, k;
  int max_length = 0;
  for (i = 0; i < len; i++) {
    for (j = i; j < len; j++) {
      int seen[256] = {0};
      int duplicate = 0;
      for (k = i; k <= j; k++) {
        if (seen[arr[k]]) {
          duplicate = 1;
          break;
        }
        seen[arr[k]] = 1;
      }
      if (!duplicate) {
        int current_length = j - i + 1;
        if (current_length > max_length) {
          max_length = current_length;
        }
      }
    }
  }
  return max_length;
}