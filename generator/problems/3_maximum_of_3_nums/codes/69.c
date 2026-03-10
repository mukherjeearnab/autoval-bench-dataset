int solve_student(int a, int b, int c) {
 int max;
 if (a > b && a > c)
  max = a;
 else
  max = b;  
 return max;
}