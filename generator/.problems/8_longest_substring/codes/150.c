int solve_student(char *arr, int len) {
  int maxLength = 0;
  int i = 0;
  int j = 0;
  int char_index[256] = {0};
  while (i < len) {
    if (char_index[arr[i]] == 0) {
      char_index[arr[i]] = 1;
      j++;
      maxLength = (maxLength > j) ? maxLength : j;
    } else {
      while (arr[i] != arr[i - j]) {
        char_index[arr[i - j]] = 0;
        j--;
      }
      char_index[arr[i]] = 1;
    }
    i++;
  }
  return maxLength;
}