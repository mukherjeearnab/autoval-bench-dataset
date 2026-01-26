int solve_student(char *arr, int len) {
  int n = len;
  int max_len = 0;
  int i = 0;
  int j = 0;
  while (i < n) {
    if (j < n && arr[i] != arr[j]) {
      j++;
    } else if (j < n && arr[i] == arr[j]) {
      max_len = (max_len > (j - i)) ? max_len : (j - i);
      j++;
    } else {
      break;
    }
    i++;
  }
  return max_len;
}