int solve_student(int a, int b, int c) {
    int result;
    if (a > b) {
      if (a > c)
        result = a;
      else
        result = c;
    }
    else {
      if (b > c)
        result = b;
      else
        result = c;
    }
    return result;
}