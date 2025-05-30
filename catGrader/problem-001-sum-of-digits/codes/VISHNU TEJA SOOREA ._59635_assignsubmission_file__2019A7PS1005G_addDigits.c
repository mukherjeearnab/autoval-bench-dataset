int solve_student(int n) {
    if (n < 10) return n;
    int digit = n % 10;
    int sub = solve_student(n / 10);
    int n = sub + digit;

    return digit(n);
}