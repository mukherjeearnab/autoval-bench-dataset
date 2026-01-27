int solve_student(const char s[], int n) {
  int i = 0;
  int j = n;
  while(i < j){
    if (s[i] != s[j])
      return 0;
    i++;
    j--;
  }
  return 1;
}