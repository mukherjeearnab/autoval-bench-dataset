int solve_student(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    while (n > 1) {
        if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0) return 0;
        n /= 2;
    }
    return 1;
}