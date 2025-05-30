int solve_student(int n) {
    // Write solution here
    if (n < 10)
        return n;

    n = solve_student(n / 10) + (n % 10);
    return solve_student(n);
}