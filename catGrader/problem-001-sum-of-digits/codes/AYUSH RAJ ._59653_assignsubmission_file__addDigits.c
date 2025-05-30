int solve_student(int n) {
    if (n < 10) return n;
    return solve_student((n % 10) + solve_student(n / 10));
}
