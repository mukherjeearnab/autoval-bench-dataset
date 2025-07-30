int solve_student(int n) {
  int s = 0;
  while (n != 1 && s < 1000) {
    s++;
    int temp = n;
    int sum = 0;
    while (temp > 0) {
      int digit = temp % 10;
      sum += digit * digit;
      temp /= 10;
    }
    n = sum;
  }
  if(n == 1){
    return 1;
  } else {
    return 0;
  }
}