int solve_student(int n) {
    if (n < 10) return n;
    int m = 0;
    while (n) {
        m += (n % 10);
        n /= 10;
    }
    return solve_student(m);
}