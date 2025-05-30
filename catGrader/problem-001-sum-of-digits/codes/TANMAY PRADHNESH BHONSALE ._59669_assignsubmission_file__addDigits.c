int solve_student(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + solve_student(n / 10);
}