int solve_student(int a, int b, int c) {
 int max = a;
 if (b > max) max = b
 if (c > max) return c
 return max
}