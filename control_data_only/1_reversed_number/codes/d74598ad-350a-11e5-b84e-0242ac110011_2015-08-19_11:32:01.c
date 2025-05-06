int solve_student(int num) {
    int a = num, b = 0;
    while (a > 0) {
        int r = a % 10;
        a = a / 10;
        b = b * 10 + r;
    }
    return b;
}