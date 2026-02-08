int solve_student(int num) {
  int reversed = 0;
  int i = 0;
  while(num != 0){
    reversed += (num % 10) * 10^i;
    num /= 10;
    i++;
  }
  return reversed;
}