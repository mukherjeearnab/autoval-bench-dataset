
int solve_student(int num) {
    int r = 0;
    while (num != 0) {
        int d = num % 10;
        r = r * 10 + d;
        num = num / 10;
    }
    return r;
}
