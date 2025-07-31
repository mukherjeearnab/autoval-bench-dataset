int solve_student(int n) {
    int a = 0, b = 1, c;
    if (n == 0) return 1;
    if (n == 1) return 1;
    c = a + b;
    for (int i = 2; i <= n; i++) {
        a = b;
        b = c;
        c = a + b;
    }
    return c;
}