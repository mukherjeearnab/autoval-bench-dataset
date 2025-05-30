int solve_student(int n) {
    // Write solution here
    if (n < 10) {
        return n;
    } else {
        return ((n % 10) + solve_student(n / 10));
    }
}