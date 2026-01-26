int solve_student(char *arr, int len) {
  if (len == 0) return 0;
  int max_length = 1;
  int current_length = 1;
  for (int i = 1; i < len; i++) {
    if (arr[i] != arr[i - 1]) {
      current_length++;
    } else {
      max_length = (max_length > current_length) ? max_length : current_length;
      current_length = 1;
    }
  }
  return (max_length > current_length) ? max_length : current_length;
}