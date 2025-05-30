int solve_student(int n) {
    // Write solution here
    if (n < 10) {
        return n;
    } else {
        int rem = n % 10;
        int quot = n / 10;
        return solve_student(rem + solve_student(quot));
    }
}
