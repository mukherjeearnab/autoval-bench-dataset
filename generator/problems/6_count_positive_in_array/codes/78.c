int solve_student(int* arr, int n) {
  int i, c = 0;
  for (i = 0; i < n; i++){
    if (arr[i] > 0)
      c++;
  } 
  return c;
}