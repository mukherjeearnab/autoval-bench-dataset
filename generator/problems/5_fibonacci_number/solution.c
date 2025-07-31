int solve_master(int n) {
    if (n <= 1) {
        return n;
    } else {
        return solve_student(n - 1) + solve_student(n - 2);
    }
}