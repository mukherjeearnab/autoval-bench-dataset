int solve_student(int n) {
  int i = 0;
  while(i < n){
    i = i * 2;
  }
  if(i == n){
    return 1;
  } else {
    return 0;
  }
}