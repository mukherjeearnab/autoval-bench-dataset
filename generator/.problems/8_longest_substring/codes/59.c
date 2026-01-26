int solve_student(char *arr, int len) {
  int n = len;
  if (n == 0) return 0;
  int maxLen = 1;
  int start = 0;
  int charIndex[256];
  for (int i = 0; i < 256; i++) {
    charIndex[i] = -1;
  }
  charIndex[arr[0]] = 0;
  for (int i = 1; i < n; i++) {
    if (charIndex[arr[i]] >= start) {
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