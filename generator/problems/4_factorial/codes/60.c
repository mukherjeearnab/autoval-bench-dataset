int solve_student(int num) {
    int factorial = 0;
    for (int i = 1; i <= num; i++){
        factorial += i;
    }
    return factorial;
}