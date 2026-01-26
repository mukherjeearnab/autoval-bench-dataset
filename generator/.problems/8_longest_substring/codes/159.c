int solve_student(char *arr, int len) {
  int maxLength = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      int uniqueChars = 1;
      for (int k = i; k < j; k++) {
        if (arr[k] == arr[j]) {
          uniqueChars = 0;
          break;
        }
      }
      if (uniqueChars) {
        int currentLength = j - i + 1;
        if (currentLength > maxLength) {
          maxLength = currentLength;
        }
      }
    }
  }
  return maxLength;
}