int solve_student(int n) {
    if (n / 10 == 0) return n;
    // Write solution here
    int x = 0;

    while (n) {
        x += n % 10;
        n /= 10;
    }

    return solve_student(x);
}