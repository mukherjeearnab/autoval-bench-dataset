int solve_student(int n) {
  int reversed = 0;
  while(n){
    int pop = n % 10;
    reversed = reversed * 10 + pop;
    n /= 10;
  }
  if (reversed > 2147483647 || reversed < -2147483648) return 0;
  return reversed;
}