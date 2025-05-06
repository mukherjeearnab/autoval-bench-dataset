int solve_student(int num) {
    int b = 0;
    while (num > 0) {
        b = num % 10 + 10 * b;
        num = num / 10;
    }
    return b;
}