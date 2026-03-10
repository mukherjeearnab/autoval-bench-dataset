int solve_student(int a, int b, int c) {
 int max = a;
 if (b < max) b = max; 
 if (c > max)
  max = c;
 return max;
}