int solve_student(int n) {
    int a = 0, b = 1, c;
    if (n == 0) return 0;
    if (n == 1) return 1;
    c = solve_student(n - 1) + solve_student(n - 2);
    return c;
}