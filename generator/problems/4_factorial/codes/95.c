int solve_student(int num) {
    int factorial = 1;
    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    return factorial;
}