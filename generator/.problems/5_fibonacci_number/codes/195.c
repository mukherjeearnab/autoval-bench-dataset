int solve_student(int n) {
    int a = 0, b = 1, c = 0;
    if (n == 0) return 0;
    if (n == 1) return 1;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}