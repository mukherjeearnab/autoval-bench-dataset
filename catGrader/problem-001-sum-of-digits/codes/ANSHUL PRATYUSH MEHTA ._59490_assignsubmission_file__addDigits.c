int helper(int n) {
    if (n == 0) return 0;
    if (n < 0) n *= -1;
    return n % 10 + helper(n / 10);
    // Write solution here
}

int solve_student(int n) {
    if (n / 10 == 0) return n;
    return solve_student(helper(n));
}
