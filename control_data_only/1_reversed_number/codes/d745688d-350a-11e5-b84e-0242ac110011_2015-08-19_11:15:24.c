
int solve_student(int num) {
    int reverse = 0;
    while (num != 0) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }
    return reverse;
}
