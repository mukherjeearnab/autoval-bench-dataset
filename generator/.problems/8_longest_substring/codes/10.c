int solve_student(char *arr, int len) {
  int max_len = 0;
  int i = 0;
  while (i < len) {
    int j = i;
    int hash[256] = {0};
    while (j < len) {
      if (hash[arr[j]]) {
        break;
      }
      hash[arr[j]] = 1;
      j++;
    }
    int current_len = j - i;
    if (current_len > max_len) {
      max_len = current_len;
    }
    i++;
  }
  return max_len;
}