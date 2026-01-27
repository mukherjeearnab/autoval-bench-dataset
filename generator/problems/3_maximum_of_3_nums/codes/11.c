int solve_student(int a, int b, int c) { 
  int max_val = a; 
  if (b > max_val) { 
    max_val = b; 
  } 
  if (c > max_val) { 
    max_val = c; 
  } 
  return max_val;
}