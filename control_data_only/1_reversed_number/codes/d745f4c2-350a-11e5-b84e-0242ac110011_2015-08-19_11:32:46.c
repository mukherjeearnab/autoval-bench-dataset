
int solve_student(int num) {
    int c = 0;
    while (num != 0) {
        c = c * 10 + (num % 10);
        num = num / 10;
    }
    return c;
}
