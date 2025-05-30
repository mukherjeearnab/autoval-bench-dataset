int solve_student(int n) {
    // Write solution here
    long long sum = 0;
    if (n < 10) {
        sum += n;
        return sum;
    } else {
        return solve_student(n % 10 + solve_student(n / 10));
    }
}
