int solve_student(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    int result = 0;
    for (int i = 0; i < n; i++){
        result = solve_student(n-1) + solve_student(n-2);
    }
    return result;
  }
}