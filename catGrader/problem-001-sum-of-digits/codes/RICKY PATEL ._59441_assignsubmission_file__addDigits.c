int solve_student(int n) {
    // Write solution here
    if (n < 10) {
        return n;
    }

    int lastDigit = n % 10;

    return solve_student(lastDigit + solve_student(n / 10));
}