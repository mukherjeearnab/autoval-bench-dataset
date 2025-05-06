
int solve_student(int num) {
    int m = 0;
    while (num != 0) {
        int r = num % 10;
        m = m * 10 + r;
        num = num / 10;
    }
    return m;
}
