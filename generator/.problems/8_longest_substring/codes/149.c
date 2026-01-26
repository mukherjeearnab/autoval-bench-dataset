int solve_student(char *arr, int len) {
  int max_length = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      int substring_length = j - i + 1;
      int found_duplicate = 0;
      for (int k = 0; k < substring_length; k++) {
        for (int l = k + 1; l < substring_length; l++) {
          if (arr[i + k] == arr[i + l]) {
            found_duplicate = 1;
            break;
          }
        }
        if (found_duplicate) break;
      }
      if (!found_duplicate) {
        if (substring_length > max_length) {
          max_length = substring_length;
        }
      }
    }
  }
  return max_length;
}