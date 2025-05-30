int solve_student(int n) {
    // Write solution here
    if (n < 10) {
        return n;
    }
    if (n == 0) {
        return n;
    }

    return solve_student(solve_student(n / 10) + n % 10);
}