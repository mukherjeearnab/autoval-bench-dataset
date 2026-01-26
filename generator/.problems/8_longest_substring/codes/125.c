int solve_student(char *arr, int len) {
  if (len == 0) return 0;
  int maxLength = 1;
  int i = 0;
  while (i < len) {
    int j = i;
    int seen[256] = {0};
    while (j < len) {
      if (seen[arr[j]]) break;
      seen[arr[j]] = 1;
      maxLength = (j - i + 1) > maxLength ? (j - i + 1) : maxLength;
      j++;
    }
    i++;
  }
  return maxLength;
}