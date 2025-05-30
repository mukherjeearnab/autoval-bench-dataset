int solve_student(int n) {
    if (n >= 0 && n < 10)
        return n;
    else
        return solve_student(n / 10) + n % 10;
}