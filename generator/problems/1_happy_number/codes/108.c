int solve_student(int n) {
  int x = n;
  while (x != 1 && x < 10000) {
    int sum = 0;
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    n = sum;
    x = n;
  }
  if(n == 1){
    return 1;
  } else {
    return 0;
  }
}