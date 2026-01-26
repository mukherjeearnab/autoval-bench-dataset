int solve_student(char *arr, int len) {
  int max_length = 0;
  int current_length = 0;
  int char_map[256] = {0};
  for (int i = 0; i < len; i++) {
    if (char_map[arr[i]] > 0) {
      current_length = 0;
    }
    char_map[arr[i]] = 1;
    current_length++;
    if (current_length > max_length) {
      max_length = current_length;
    }
  }
  return max_length;
}