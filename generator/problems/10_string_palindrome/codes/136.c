int solve_student(char *s, int len) {
  
  int i = 0;
  int j = len - 1;
  while (i < j) {
    if (s[i] != s[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}