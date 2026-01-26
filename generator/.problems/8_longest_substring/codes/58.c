int solve_student(char *arr, int len) {
  int n = len;
  int max_len = 0;
  int i = 0;
  while (i < n) {
    int j = i;
    int count = 0;
    int seen[256] = {0};
    while (j < n) {
      if (seen[arr[j]]) {
        break;
      }
      seen[arr[j]] = 1;
      count++;
      j++;
    }
    if (count > max_len) {
      max_len = count;
    }
    i++;
  }
  return max_len;
}