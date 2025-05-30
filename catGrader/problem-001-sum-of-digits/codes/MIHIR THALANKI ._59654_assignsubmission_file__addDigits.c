int solve_student(int n) {
    if (n < 10) {
        // if single digit, sum of digits = the value
        return n;
    } else {
        // call recursively
        return solve_student(solve_student(n / 10) + (n % 10));
    }
}