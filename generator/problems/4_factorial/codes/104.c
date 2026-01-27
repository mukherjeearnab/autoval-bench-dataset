int solve_student(int num) {
    if (num == 0) return 1;
    int factorial = 1;
    while (num > 1) {
        factorial *= num;
        num--;
    }
    return factorial;
}