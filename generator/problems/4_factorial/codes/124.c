int solve_student(int num) {
  int res = 1;
  for(int i = 0; i < num; i++){
    res *= (i+1);
  }
  return res;
}