int solve_student(char *arr, int len) {
  int maxLen = 0;
  int start = 0;
  int charMap[256];
  for (int i = 0; i < 256; i++) {
    charMap[i] = -1;
  }
  for (int i = 0; i < len; i++) {
    if (charMap[arr[i]] >= start) {
      start = charMap[arr[i]] + 1;
    }
    charMap[arr[i]] = i;
    int lenSub = i - start + 1;
    if (lenSub > maxLen) {
      maxLen = lenSub;
    }
  }
  return maxLen;
}