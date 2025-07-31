int solve_student(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    int result = 0;
    for (int i = 0; i < n; i++){
        result = result + solve_student(n-i-1);
    }
    return result;
  }
}