
int solve_student(int num) {
    int b = 0;  // b is reversed number
    while (num != 0) {
        b = (b * 10) + (num % 10);
        num = num / 10;
    }
    return b;
}
