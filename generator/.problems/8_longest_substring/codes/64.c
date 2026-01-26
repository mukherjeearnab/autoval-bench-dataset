int solve_student(char *arr, int len) {
  if (len == 0) return 0;
  int maxLen = 1;
  int start = 0;
  int end = 0;
  int charMap[256] = {0};
  while (end < len) {
    if (charMap[arr[end]] > 0 && charMap[arr[end]] > start) {
      start = charMap[arr[end]];
    }
    maxLen = (maxLen > (end - start + 1)) ? maxLen : (end - start + 1);
    charMap[arr[end]] = end + 1;
    end++;
  }
  return maxLen;
}