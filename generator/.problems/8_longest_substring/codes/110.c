int solve_student(char *arr, int len) {
  int maxLen = 0;
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
    maxLen = (i - j + 1) > maxLen ? (i - j + 1) : maxLen;
    i++;
  }
  return maxLen;
}