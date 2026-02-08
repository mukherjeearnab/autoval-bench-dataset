int solve_student(char* str, int len) {
  int i, j;
  for (i = 0, j = len; i < j; i++, j--) {
      if(str[i] != str[j])
          return 0;
  }
  return 1;
}