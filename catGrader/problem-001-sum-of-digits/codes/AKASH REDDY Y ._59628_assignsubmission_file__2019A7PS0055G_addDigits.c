int solve_student(int n) {
    // Write solution here
    // printf("in");
    if (n / 10 == 0) {
        return n;
    }

    int ans = 0, m = n;
    while (m > 0) {
        ans += m % 10;
        m /= 10;
    }
    return solve_student(ans);
}