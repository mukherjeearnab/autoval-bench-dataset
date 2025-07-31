int solve_student(int n) {
  int i;
  if (n <= 0) return 0;
  for (i = 2; i <= 5; i++){
    while(n % i == 0){n = n/i;}
  }
  if(n==1) return 1;
  else return 0;
}