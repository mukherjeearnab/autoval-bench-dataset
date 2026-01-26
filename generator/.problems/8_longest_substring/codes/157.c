int solve_student(char *arr, int len) {
  int max_length = 0;
  int start = 0;
  int char_map[256] = {0};
  for (int i = 0; i < len; i++) {
    if (char_map[arr[i]] > start) {
      start = char_map[arr[i]];
    }
    char_map[arr[i]] = i + 1;
    int current_length = i - start + 1;
    if (current_length > max_length) {
      max_length = current_length;
    }
  }
  return max_length;
}