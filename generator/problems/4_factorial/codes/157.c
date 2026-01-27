int solve_student(int num) {
    int factorial;
    if (num == 0) {
        factorial = 1;
    } else {
        factorial = 1;
        for (int i = 1; i <= num; ++i) {
          factorial *= i;
        }
    }
    return factorial;
}