int solve_student(const char s[], int n) {
  int i, j;
  i = 0;
  j = n - 1;
  while (i < j) {
    if (s[i] == s[j])
      return 1;
    i++;
    j--;
  }
  return 0;
}