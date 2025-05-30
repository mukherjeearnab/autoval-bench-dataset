int solve_student(int n) {
    if (n < 10)
        return n;
    else {
        return solve_student(n % 10 + solve_student(n / 10));
    }
}