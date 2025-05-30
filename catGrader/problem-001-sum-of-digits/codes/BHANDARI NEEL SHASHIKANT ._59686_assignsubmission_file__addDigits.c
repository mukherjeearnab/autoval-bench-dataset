
int solve_student(int n) {
    // Write solution here
    int sum = 0;
    int m = 0;
    if (n < 10) {
        return n;
    } else {
        while (n > 0) {
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }
        return solve_student(sum);
    }
}
