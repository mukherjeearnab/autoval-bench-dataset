int solve_student(char *arr, int len) {
  int max_len = 0;
  int i = 0;
  int j = 0;
  while (j < len) {
    if (arr[i] == arr[j]) {
      i++;
    }
    max_len = max_len > (j - i + 1) ? max_len : (j - i + 1);
    j++;
  }
  return max_len;
}