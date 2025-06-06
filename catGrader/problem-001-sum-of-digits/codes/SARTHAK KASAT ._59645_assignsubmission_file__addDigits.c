
int solve_student(int n) {
    if (n <= 9) {
        return n;
    }
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return solve_student(sum);
}