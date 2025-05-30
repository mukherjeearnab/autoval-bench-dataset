
int solve_student(int n) {
    // Write solution here
    int temp = 0;
    if (n == 0)
        return 0;
    temp = temp + n % 10;
    temp + = solve_student(n / 10);
    return sum;
}