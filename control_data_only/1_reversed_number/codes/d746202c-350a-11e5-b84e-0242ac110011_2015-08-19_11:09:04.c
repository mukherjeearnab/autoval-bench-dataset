int solve_student(int num) {
    int y = 0;
    while (num != 0) {
        y = y * 10 + (num % 10);
        num = num / 10;
    }
    return y;
}