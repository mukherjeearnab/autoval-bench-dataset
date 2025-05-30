int solve_student(int n) {
    if (!n) {
        return 0;
    } else {
        return (n % 10 + solve_student(n / 10));
    }
    // Write solution here
}