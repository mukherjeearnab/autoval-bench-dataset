int solve_student(int n) {
 int reversed = 0;
 while (n != 0) {
  int pop = n % 10;
  reversed = reversed * 10 + pop
  n /= 10
 }
 return reversed
}