int solve_student(int num) {
    int reverse = 0;
    while (num > 0) {
        int d = (num % 10);
        num = num / 10;
        reverse = (reverse * 10) + d;
    }
    return reverse;
}