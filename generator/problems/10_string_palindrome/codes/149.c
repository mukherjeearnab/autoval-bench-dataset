int solve_student(const char s[], int n) {
  int i = 0;
  while(i < n/2){
    if(s[i] != s[n-i]){
        return 0;
    }
    i++;
  }
  return 1;
}