int solve_student(char *arr, int len) {
  int maxLength = 0;
  int start = 0;
  int end = 0;
  int charMap[256] = {0};

  while (end < len) {
    if (charMap[arr[end]] != 0) {
      while (arr[start] != arr[end]) {
        charMap[arr[start]] = 0;
        start++;
      }
      charMap[arr[start]] = 0;
      start++;
    }
    charMap[arr[end]] = 1;
    maxLength = (maxLength > (end - start + 1)) ? maxLength : (end - start + 1);
    end++;
  }
  return maxLength;
}