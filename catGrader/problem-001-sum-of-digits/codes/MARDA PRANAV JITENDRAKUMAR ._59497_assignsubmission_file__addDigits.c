int solve_student(int n) {
    // Write solution here
    if (n == 0) {
        return 0;
    } else {
        return (n % 10 + solve_student(n / 10));
    }
}