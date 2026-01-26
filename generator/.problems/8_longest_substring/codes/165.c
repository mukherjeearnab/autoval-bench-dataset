int solve_student(char *arr, int len) {
  int n = 0, res = 0, i;
  int hash[256];
  for (i = 0; i < 256; i++) {
    hash[i] = -1;
  }
  for (i = 0; i < len; i++) {
    if (hash[arr[i]] >= n) {
      n = hash[arr[i]] + 1;
    }
    hash[arr[i]] = i;
    res = (res > (i - n + 1)) ? res : (i - n + 1);
  }
  return res;
}