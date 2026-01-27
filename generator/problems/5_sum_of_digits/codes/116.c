int solve_student(int num) {
 int sum = 0;
 if (num < 0) return -1; //handle negative input
 while(num>0){
  sum += num % 10;
  num /= 10;
 }
 return sum;
}