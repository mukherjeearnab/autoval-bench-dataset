int solve_student(int a, int b, int c) {
 int max_value;
 if(a>b && a>c)
  max_value = a;
 else if(b > a && b>c)
  max_value = b;
 else
  max_value = c;
 return max_value;
}