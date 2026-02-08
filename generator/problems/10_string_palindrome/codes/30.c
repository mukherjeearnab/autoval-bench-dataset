int solve_student(char* s, int len) {
  int i = 0;
  for (i = 0; i < len; i++){
    if(s[i] != s[len])
      return 0;
  }
  return 1;
}