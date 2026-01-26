int solve_student(char *arr, int len) {
  int max_len = 0;
  int i = 0;
  while (i < len) {
    int j = i;
    int count[256] = {0};
    while (j < len) {
      if (count[arr[j]] == 0) {
        count[arr[j]] = 1;
        j++;
      } else {
        break;
      }
    }
    max_len = (j - i) > max_len ? (j - i) : max_len;
    i++;
  }
  return max_len;
}