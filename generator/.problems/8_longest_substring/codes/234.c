int solve_student(char *arr, int len) {
  int max_len = 0;
  int current_len = 0;
  for (int i = 0; i < len; i++) {
    current_len++;
    for (int j = i + 1; j < len; j++) {
      if (arr[i] == arr[j]) {
        current_len = 0;
        break;
      }
    }
    if (current_len > max_len) {
      max_len = current_len;
    }
  }
  return max_len;
}