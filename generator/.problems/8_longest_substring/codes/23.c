int solve_student(char *arr, int len) {
  int i, j, k;
  int max_length = 0;
  for (i = 0; i < len; i++) {
    for (j = i; j < len; j++) {
      int distinct = 1;
      for (k = i; k < j; k++) {
        if (arr[k] == arr[j]) {
          distinct = 0;
          break;
        }
      }
      if (distinct) {
        if (j - i + 1 > max_length) {
          max_length = j - i + 1;
        }
      }
    }
  }
  return max_length;
}