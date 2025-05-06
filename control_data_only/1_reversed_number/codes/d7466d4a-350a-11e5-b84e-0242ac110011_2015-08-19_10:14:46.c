
int solve_student(int num) {
    int m = 0;
    while (num > 0) {
        m = m * 10 + num % 10;
        num /= 10;
    }
    return m;
}
