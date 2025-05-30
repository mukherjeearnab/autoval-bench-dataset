
int solve_student(int n) {
    if (n == 0)
        return 0;
    return solve_student(n / 10) + n % 10;
}
