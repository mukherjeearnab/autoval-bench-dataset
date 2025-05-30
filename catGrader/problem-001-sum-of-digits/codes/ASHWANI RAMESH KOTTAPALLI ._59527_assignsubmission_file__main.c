int solve_student(int n) {
    // Write solution here

    if (n / 10 < 1) {
        return n;
    } else {
        if (n % 10 + solve_student(n / 10) > 9) {
            return solve_student(n % 10 + solve_student(n / 10));
        } else {
            return n % 10 + solve_student(n / 10);
        }
    }
}
