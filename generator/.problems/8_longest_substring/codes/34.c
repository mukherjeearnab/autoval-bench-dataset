int solve_student(char *arr, int len) {
  int maxLen = 0;
  int start = 0;
  int charIndex[256] = {0};
  for (int i = 0; i < len; i++) {
    if (charIndex[arr[i]] > start) {
      start = charIndex[arr[i]];
    }
    charIndex[arr[i]] = i + 1;
    int currentLen = i - start + 1;
    if (currentLen > maxLen) {
      maxLen = currentLen;
    }
  }
  return maxLen;
}