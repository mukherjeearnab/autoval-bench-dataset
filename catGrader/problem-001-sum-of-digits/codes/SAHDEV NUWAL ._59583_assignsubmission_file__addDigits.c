int solve_student(int n) {
    // Write solution here
    int sum = 0;
    int m = 0;
    while (n > 0) {
        m = n % 10;
        sum += m;
        n = n / 10;
    }
    if (sum > 9) {
        return solve_student(sum);
    }
    return sum;
}
