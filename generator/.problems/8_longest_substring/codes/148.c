int solve_student(char *arr, int len) {
  int maxLen = 0;
  int currentLen = 0;
  int charMap[256] = {0};
  int start = 0;
  for (int i = 0; i < len; i++) {
    if (charMap[arr[i]] > 0 && charMap[arr[i]] > start) {
      start = charMap[arr[i]];
    }
    currentLen = i - start + 1;
    if (currentLen > maxLen) {
      maxLen = currentLen;
    }
    charMap[arr[i]] = i + 1;
  }
  return maxLen;
}