int solve_student(int num) {
  int reversed = 0;
  int i = 0;
  while(i < num){
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }
  return reversed;
}