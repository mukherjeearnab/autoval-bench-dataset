int solve_student(int n) {
    // Write solution here
    if (n <= 9)
        return n;
    else
        solve_student(n % 10 + solve_student(n / 10));
}