int solve_student(int num) {
    int factorial = 1;
    if (num == 0)
      return 1;
    else {
        int i = 1;
        while(i <= num) {
          factorial *= i;
          i++;
        }
    }
    return factorial;
}