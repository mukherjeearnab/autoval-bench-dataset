int solve_student(char *arr, int len) {
  int max_len = 0;
  int i = 0;
  int j = 0;
  int count = 0;
  int ascii[256] = {0};
  while (i < len) {
    if (ascii[arr[i]] == 0) {
      ascii[arr[i]] = 1;
      count++;
    } else {
      while (arr[j] != arr[i]) {
        ascii[arr[j]] = 0;
        j++;
      }
      ascii[arr[j]] = 0; 
      j++;
      ascii[arr[i]] = 1; 
      count++;
    }
    if (count > max_len) {
        max_len = count;
    }
    i++;
  }
  return max_len;
}