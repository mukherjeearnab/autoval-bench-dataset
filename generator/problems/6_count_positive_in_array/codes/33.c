int solve_student(int* arr, int n) {
  int c = 0;
  for (int i = 0; i <= n; i++) { //Off by one error
    if(arr[i] > 0)
        c++;
  }
  return c;
}