int solve_student(char *arr, int len) {
  int maxLen = 0;
  int currentLen = 0;
  int char_counts[256] = {0};
  for (int i = 0; i < len; i++) {
    if (char_counts[arr[i]] > 0) {
      currentLen = 0;
      for (int j = 0; j < 256; j++) {
        char_counts[j] = 0;
      }
    }
    char_counts[arr[i]]++;
    maxLen = (maxLen > currentLen + 1) ? maxLen : currentLen + 1;
  }
  return maxLen;
}