int solve_student(const char s[], int n) {
  int i = 0;
  int j = n - 1;

  while (i < j) {
    if (s[i] == s[j]) {
      i++;
      j--;
    } else {
      return 1;
    }
  }
  return 0;
}