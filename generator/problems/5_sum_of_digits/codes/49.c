int solve_student(int num) {
 int sum = 0;
 while (num >= 0) {
  sum += num % 10;
  num = num / 10;
  if (num == 0) break;
 }
 return sum;
}