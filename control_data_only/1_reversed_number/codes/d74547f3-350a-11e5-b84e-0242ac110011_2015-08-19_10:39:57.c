
int solve_student(int num) {
    int out = 0;
    while (num != 0) {
        out = out * 10 + num % 10;
        num /= 10;
    }
    return out;
}
