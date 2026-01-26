int solve_student(char *arr, int len) {
  int longest = 0;
  for (int i = 0; i < len; i++) {
    int current_length = 0;
    int seen[256] = {0};
    for (int j = i; j < len; j++) {
      if (seen[arr[j]]) {
        break;
      }
      seen[arr[j]] = 1;
      current_length++;
    }
    if (current_length > longest) {
      longest = current_length;
    }
  }
  return longest;
}