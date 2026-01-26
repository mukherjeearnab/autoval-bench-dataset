int solve_student(char *arr, int len) {
  int max_length = 0;
  int start = 0;
  int char_map[256] = {0};
  for (int end = 0; end < len; end++) {
    char c = arr[end];
    if (char_map[c] > start) {
      start = char_map[c];
    }
    char_map[c] = end + 1;
    int current_length = end - start + 1;
    if (current_length > max_length) {
      max_length = current_length;
    }
  }
  return max_length;
}