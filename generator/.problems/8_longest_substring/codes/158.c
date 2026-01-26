int solve_student(char *arr, int len) {
  int maxLen = 0;
  int start = 0;
  int charIndex[256];
  for (int i = 0; i < 256; i++) {
    charIndex[i] = -1;
  }
  for (int i = 0; i < len; i++) {
    if (charIndex[arr[i]] != -1 && charIndex[arr[i]] >= start) {
      start = charIndex[arr[i]] + 1;
    }
    charIndex[arr[i]] = i;
    int currentLen = i - start + 1;
    if (currentLen > maxLen) {
      maxLen = currentLen;
    }
  }
  return maxLen;
}