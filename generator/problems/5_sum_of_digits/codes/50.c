int solve_student(int num) {
 int sum = 0;
 int i;
 for (i = 0; i < num; i++) {
  sum = sum + num % 10;
 }
 return sum;
}