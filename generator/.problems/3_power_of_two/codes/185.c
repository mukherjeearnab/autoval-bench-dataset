int solve_student(int n) {
  int x = 1;
  if(n == x){
    return 1;
  }
  while(x < n){
    x = x + 2;
    if(x == n){
      return 1;
    }
  }
  return 0;
}