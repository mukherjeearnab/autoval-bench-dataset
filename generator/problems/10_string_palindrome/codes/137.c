int solve_student(char* s, int length) {
  int i;
  for(i = 0; i < length / 2; i++){
    if(s[i] != s[length - 1 - i]){
      return 0;
    }
  }
  return 1;
}