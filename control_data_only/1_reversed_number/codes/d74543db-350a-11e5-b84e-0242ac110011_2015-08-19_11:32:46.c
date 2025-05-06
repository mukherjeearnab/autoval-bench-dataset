int solve_student(int num) {
    int r = 0;
    while (num != 0) {
        r = r * 10 + num % 10;
        num = num / 10;
    }
    return r;
}