int solve_student(int n) {
    // Write solution here
    if (n < 10) {
        return n;
    }
    return solve_student(helper(n));
}

int helper(int n) {
    if (n == 0) {
        return n;
    }
    return (n % 10) + helper(n / 10);
}