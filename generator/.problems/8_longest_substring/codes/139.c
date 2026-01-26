int solve_student(char *arr, int len) {
  if (len == 0) return 0;
  int maxLen = 1;
  int i = 0;
  int j = 0;
  int charIndex[256];
  for (int k = 0; k < 256; k++) {
    charIndex[k] = -1;
  }
  while (i < len) {
    if (charIndex[arr[i]] != -1 && charIndex[arr[i]] >= j) {
      j = charIndex[arr[i]] + 1;
    }
    charIndex[arr[i]] = i;
    int currentLen = i - j + 1;
    if (currentLen > maxLen) {
      maxLen = currentLen;
    }
    i++;
  }
  return maxLen;
}